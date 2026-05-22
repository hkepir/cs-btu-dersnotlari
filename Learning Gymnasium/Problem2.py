"""
Hazine Problemi

Ajan 5x5 bir odada mahsur kaldi.(0,0) ile (4,4)
odada bir hazine (4,4) ve birde tuzak (2,2) var.
Tuzaga basmadan hazineye nasil ulasir.
Robot her zaman (0,0) dan oyuna basliyor

"""

import numpy as np
import gymnasium as gym
from gymnasium import spaces

class hazine_problemi(gym.Env):
    def __init__(self):
        
        # 0 1 2 3 yıkari,asagi,saga,sola
        self.action_space = spaces.Discrete(4)  
       
        # 0-4 arasi x 0-4 arasi y
        self.observation_space = spaces.MultiDiscrete([5,5])

        self.hazine_konumu = np.array([4,4])
        self.tuzak_konumu = np.array([2,2])

        self.state = None
        self.sayac = 0
        self.max_step = 30
        
    def reset(self,seed=None,options=None):
        super().reset(seed=seed)

        self.state = np.array([0,0])
        self.sayac = 0

        return self.state,{}
    
    def step(self,action):
        x, y = self.state[0],self.state[1]
        eski_x, eski_y = x,y

        if action == 0:
            y+=1
        elif action == 1:
            y-=1
        elif action == 2:
            x+=1
        elif action == 3:
            x-=1

        if x < 0 or x > 4 or y < 0 or y > 4:
            x,y = eski_x,eski_y
            reward = -2 # duvara carpma cezasi
            terminated = False
        else:
            self.state = np.array([x,y])
            
            reward = -1 
            terminated = False
            
            if np.array_equal(self.state,self.hazine_konumu):
                reward = 100
                terminated = True
            elif np.array_equal(self.state,self.tuzak_konumu):
                reward = -100
                terminated = True
    
        truncated = (self.sayac >= self.max_step)
        self.sayac += 1

        return self.state,reward,terminated,truncated,{}
    
env = hazine_problemi()
state,info = env.reset()

print("Baslangic konumum",state)