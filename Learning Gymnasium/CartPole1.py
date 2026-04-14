import gymnasium as gym

env = gym.make("CartPole-v1", render_mode="human")

#1.hazir ortam CartPole-v1 / MountainCar-v0 s
#2.Kendi register ettigimiz ortam.
#3.Parametreli kullanim.


# Reset environment to start a new episode
observation, info = env.reset()
#observation, info = env.reset(seed=42) seed ile her calistiginda ayni baslangic degeri
# observation: what the agent can "see" - cart position, velocity, pole angle, etc.
# info: extra debugging information (usually not needed for basic learning)

print(f"Starting observation: {observation}")
# Example output: [ 0.01234567 -0.00987654  0.02345678  0.01456789]
# [cart_position, cart_velocity, pole_angle, pole_angular_velocity]

episode_over = False
total_reward = 0

while not episode_over:
    # Choose an action: 0 = push cart left, 1 = push cart right
    action = env.action_space.sample()  # Random action for now - real agents will be smarter!

    # Take the action and see what happens
    observation, reward, terminated, truncated, info = env.step(action)

    # reward: +1 for each step the pole stays upright
    # terminated: True if pole falls too far (agent failed)
    # truncated: True if we hit the time limit (500 steps)

    total_reward += reward
    episode_over = terminated or truncated

print(f"Episode finished! Total reward: {total_reward}")
env.close()

"""
import gymnasium as gym

env = gym.make("CartPole-v1", render_mode="human")

# --- SEED ve OPTIONS Tanımlama ---
# Seed: Rastgeleliği sabitler.
my_seed = 42 

# Options: Başlangıç durumuna özel ayarlar (Eğer ortam destekliyorsa).
# Örneğin bazı özel ortamlarda başlangıç konumunu böyle seçebilirsin:
my_options = {"low": -0.05, "high": 0.05} 

# Reset sırasında ikisini birden veya sadece birini gönderebilirsin
observation, info = env.reset(seed=my_seed, options=None) 

print(f"Sabitlenmiş Başlangıç Gözlemi: {observation}")

episode_over = False
total_reward = 0

while not episode_over:
    action = env.action_space.sample() 
    observation, reward, terminated, truncated, info = env.step(action)
    
    total_reward += reward
    episode_over = terminated or truncated

print(f"Episode bitti! Toplam ödül: {total_reward}")
env.close()
"""