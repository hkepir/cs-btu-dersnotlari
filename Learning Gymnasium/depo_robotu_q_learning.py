import numpy as np
import gymnasium as gym
from gymnasium import spaces
import random

# --- Düzeltilmiş DepoRobotuZengin (bug fix: *cough* kaldırıldı) ---
class DepoRobotuZengin(gym.Env):
    def __init__(self):
        self.action_space = spaces.Discrete(4)
        self.max_pil = 3
        self.observation_space = spaces.Dict(
            {
                "robot_konumu": spaces.Discrete(3),
                "paket_sirtta_mi": spaces.Discrete(2),
                "pil_seviyesi": spaces.Discrete(4),
                "engel_var_mi": spaces.Discrete(2),
                "paket_tipi": spaces.Discrete(2)
            }
        )
        self.state = None
        self.sayac = 0
        self.max_step = 20

    def reset(self, seed=None, options=None):
        super().reset(seed=seed)
        paket_tipi = self.np_random.choice([0, 1])
        engel = self.np_random.choice([0, 1])
        self.state = {
            "robot_konumu": 0,
            "paket_sirtta_mi": 0,
            "pil_seviyesi": self.max_pil,
            "engel_var_mi": engel,
            "paket_tipi": paket_tipi
        }
        self.sayac = 0
        return self.state, {}

    def step(self, action):
        konum = self.state["robot_konumu"]
        sirtta = self.state["paket_sirtta_mi"]
        pil = self.state["pil_seviyesi"]
        engel = self.state["engel_var_mi"]
        p_tip = self.state["paket_tipi"]

        reward = -1
        terminated = False
        truncated = False
        info = {}

        self.sayac += 1

        if action != 3:
            if sirtta == 1 and p_tip == 1:
                pil -= 2
            else:
                pil -= 1

        if action == 0:
            if konum > 0:
                konum -= 1
            else:
                reward = -2
        elif action == 1:
            if konum < 2:
                konum += 1
            else:
                reward = -2
        elif action == 2:
            if konum == 0 and sirtta == 0:
                sirtta = 1
                reward = 10
            elif konum == 2 and sirtta == 1:
                sirtta = 0
                if p_tip == 1:
                    reward = 150
                else:
                    reward = 50
                terminated = True
            else:
                reward = -10
        elif action == 3:
            reward = -1

        engel = self.np_random.choice([0, 1])

        # FIX: *cough* kaldırıldı
        if konum == 1 and engel == 1:
            reward = -100
            terminated = True
            info["cause"] = "collided_with_obstacle"

        if konum == 1 and not terminated:
            pil = self.max_pil

        if pil <= 0 and not terminated:
            reward = -50
            terminated = True
            info["cause"] = "out_of_battery"

        self.state = {
            "robot_konumu": konum,
            "paket_sirtta_mi": sirtta,
            "pil_seviyesi": pil,
            "engel_var_mi": engel,
            "paket_tipi": p_tip
        }

        if self.sayac >= self.max_step:
            truncated = True

        return self.state, reward, terminated, truncated, info


# --- State (dict) -> tek bir tuple/index'e çevirme ---
def encode_state(state):
    # Her bir alanı tek bir tuple'da topluyoruz -> Q tablosunda key olarak kullanılabilir
    return (
        state["robot_konumu"],
        state["paket_sirtta_mi"],
        state["pil_seviyesi"],
        state["engel_var_mi"],
        state["paket_tipi"],
    )


# --- Q-Learning Ajanı ---
class QLearningAgent:
    def __init__(self, n_actions, alpha=0.1, gamma=0.95,
                 epsilon=1.0, epsilon_min=0.05, epsilon_decay=0.995):
        self.n_actions = n_actions
        self.alpha = alpha          # öğrenme oranı
        self.gamma = gamma          # gelecekteki ödüllerin ağırlığı
        self.epsilon = epsilon      # keşif (exploration) oranı
        self.epsilon_min = epsilon_min
        self.epsilon_decay = epsilon_decay
        self.q_table = {}           # {state: [Q(s,a0), Q(s,a1), ...]}

    def get_qs(self, state):
        if state not in self.q_table:
            self.q_table[state] = np.zeros(self.n_actions)
        return self.q_table[state]

    def choose_action(self, state):
        if random.random() < self.epsilon:
            return random.randint(0, self.n_actions - 1)  # keşfet (explore)
        return int(np.argmax(self.get_qs(state)))          # bildiğini kullan (exploit)

    def learn(self, state, action, reward, next_state, done):
        q_current = self.get_qs(state)[action]
        q_next_max = 0 if done else np.max(self.get_qs(next_state))
        # Q-learning güncelleme kuralı (Bellman denklemi)
        td_target = reward + self.gamma * q_next_max
        self.get_qs(state)[action] += self.alpha * (td_target - q_current)

    def decay_epsilon(self):
        self.epsilon = max(self.epsilon_min, self.epsilon * self.epsilon_decay)


# --- Eğitim döngüsü ---
def train(episodes=5000):
    env = DepoRobotuZengin()
    agent = QLearningAgent(n_actions=env.action_space.n)
    rewards_history = []

    for ep in range(episodes):
        state, _ = env.reset()
        state = encode_state(state)
        total_reward = 0
        done = False

        while not done:
            action = agent.choose_action(state)
            next_state_raw, reward, terminated, truncated, info = env.step(action)
            next_state = encode_state(next_state_raw)
            done = terminated or truncated

            agent.learn(state, action, reward, next_state, done)

            state = next_state
            total_reward += reward

        agent.decay_epsilon()
        rewards_history.append(total_reward)

        if (ep + 1) % 500 == 0:
            avg_last = np.mean(rewards_history[-500:])
            print(f"Episode {ep+1}/{episodes} | Son 500 ep. ortalama ödül: {avg_last:.2f} | epsilon: {agent.epsilon:.3f}")

    return agent, rewards_history


# --- Eğitilmiş ajanı izleme (greedy, epsilon=0) ---
def watch_trained_agent(agent, episodes=3):
    env = DepoRobotuZengin()
    old_epsilon = agent.epsilon
    agent.epsilon = 0  # artık sadece en iyi bildiğini yapsın

    for ep in range(episodes):
        state_raw, _ = env.reset()
        state = encode_state(state_raw)
        done = False
        total_reward = 0
        steps = 0

        print(f"\n--- Episode {ep+1} ---")
        while not done:
            action = agent.choose_action(state)
            state_raw, reward, terminated, truncated, info = env.step(action)
            state = encode_state(state_raw)
            done = terminated or truncated
            total_reward += reward
            steps += 1
            print(f"  Adım {steps}: action={action}, reward={reward}, state={state_raw}")

        print(f"  Bitti. Toplam ödül: {total_reward}, sebep: {info.get('cause', 'delivered/truncated')}")

    agent.epsilon = old_epsilon


if __name__ == "__main__":
    trained_agent, history = train(episodes=5000)
    watch_trained_agent(trained_agent, episodes=3)
