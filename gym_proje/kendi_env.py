import gymnasium as gym
from gymnasium import spaces
from gymnasium.envs.registration import register

class MyEnv(gym.Env):
    def __init__(self):
        super(MyEnv, self).__init__()
        
        self.state = 0
        self.action_space = spaces.Discrete(2)
        self.observation_space = spaces.Discrete(11)

    def reset(self, seed=None, options=None):
        self.state = 0
        return self.state, {}

    def step(self, action):
        if action == 1:
            self.state += 1
        else:
            self.state -= 1

        self.state = max(0, min(10, self.state))

        if self.state == 10:
            reward = 1
            done = True
        else:
            reward = 0
            done = False

        return self.state, reward, done, False, {}

    def render(self):
        print(f"Durum: {self.state}")


# 🔥 REGISTER
register(
    id="MyEnv-v0",
    entry_point="kendi_env:MyEnv",  # dosya_adı:class_adı
)


# 🔥 TEST
if __name__ == "__main__":
    env = gym.make("MyEnv-v0")

    obs, _ = env.reset()

    for _ in range(20):
        action = env.action_space.sample()
        obs, reward, done, _, _ = env.step(action)

        env.render()

        if done:
            print("Kazandı!")
            break

    env.close()