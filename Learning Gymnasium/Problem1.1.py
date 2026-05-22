import gymnasium as gym
from gymnasium import spaces
import numpy as np

class SayiDengeEnv(gym.Env):
    def __init__(self):
        self.action_space = spaces.Discrete(2) #0,1 
        self.observation_space = spaces.Discrete(101) #0-100 arasi tam sayilar

        self.state = None
        self.sayac = 0
        self.max_step = 20

    def reset(self, seed = None, options = None):
        self.state = 50
        self.sayac = 0
        return self.state,{} # (obs,info)
    
    def step(self,action):
        if action == 1:
            self.state += 1
        else:
            self.state -= 1

        reward = -abs(self.state-50)
        self.sayac += 1

        terminated = (self.state < 0 or self.state > 100)
        truncated = (self.sayac >= self.max_step)

        return self.state,reward,terminated,truncated,{} # tuple unpacking
    
"""
ortam = SayiDengeEnv()
guncel_durum = ortam.reset()

print("\nBaslangic Durumu: ",guncel_durum)

for i in range(10):
    aksiyon = np.random.choice([0,1])
    guncel_durum,reward,terminated,truncated,info = ortam.step(aksiyon) 
    print(f"Adım {i+1}: Action={aksiyon}, State={guncel_durum}, Reward={reward}")
    if terminated:
        print("Bolum Bitti!\n")
        break
"""