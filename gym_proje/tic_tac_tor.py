import gymnasium as gym

# Basit bir klasik kontrol ortamı seçelim
env = gym.make("CartPole-v1", render_mode="human")

# Ortamı sıfırla
observation, info = env.reset()

print("Simülasyon açılıyor...")

for _ in range(200):
    # Rastgele bir hareket seç (0 veya 1)
    action = env.action_space.sample() 
    
    # Adımı gerçekleştir
    observation, reward, terminated, truncated, info = env.step(action)

    # Eğer oyun biterse (çubuk düşerse) tekrar başlat
    if terminated or truncated:
        observation, info = env.reset()

env.close()
print("Test başarıyla tamamlandı!")