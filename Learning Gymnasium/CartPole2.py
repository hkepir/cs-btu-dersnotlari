import gymnasium as gym
from collections import deque 
import random

env = gym.make("CartPole-v1", render_mode="human")

# maxlen=1000 hafizayi sinirlar
memory = deque(maxlen=1000)

observation, info = env.reset(seed=42)

episode_over = False
total_reward = 0

print("Eğitim ve Veri Toplama ...")

while not episode_over:
    # Rastgele bir aksiyon sec. Ajan suan ogrenmiyor veri topluyor.
    action = env.action_space.sample() 
    
    next_observation, reward, terminated, truncated, info = env.step(action)
    
    memory.append((observation, action, reward, next_observation, terminated)) #hafizaya kayit (record)
    
    # Mevcut gozlemi guncelle
    observation = next_observation
    
    total_reward += reward
    episode_over = terminated or truncated

print(f"Finish! Total Reward: {total_reward}")
print(f"Memory toplam deneyim sayisi: {len(memory)}")

# Hafızadan rastgele bir ornek(Mini-batch)
if len(memory) > 0:
    sample = random.sample(memory, 1)[0]
    print(f"\nHafızadan rastgele bir veri örneği:\nDurum: {sample[0]}\nAksiyon: {sample[1]}\nÖdül: {sample[2]}\nSonraki Durum: {sample[3]}")

env.close()



"""
# ❌ Wrong - forgetting to reset
env = gym.make("CartPole-v1")
obs, reward, terminated, truncated, info = env.step(action)  # Error!

# ✅ Correct - always reset first
env = gym.make("CartPole-v1")
obs, info = env.reset()  # Start properly
obs, reward, terminated, truncated, info = env.step(action)  # Now this works
"""