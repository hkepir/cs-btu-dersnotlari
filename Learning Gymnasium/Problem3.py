"""
Depo Robotu

Depo da tek koridor var 

0.Durak: yukleme noktasi
1.Durak: bos durak
2.Durak: teslimat noktasi

Amac: en kisa surede 0. duraktan paket al,2. duraga birak
NOT:aksiyon sol, sag, al/birak

"""

import numpy as np
import gymnasium as gym
from gymnasium import spaces

class depo_robotu(gym.Env):
    def __init__(self):

        self.action_space = spaces.Discrete(3)
        
        self.observation_space = spaces.Dict(
            {
                "robot_konumu":spaces.Discrete(3),
                "paket_sirtta_mi":spaces.Discrete(2)
            }
        )

        self.state = None
        self.sayac = 0
        self.max_step = 15

    def reset(self,seed = None, options = None):
        
        self.state = {
            "robot_konumu":0,
            "paket_sirtta_mi":0
        }
        self.sayac = 0

        return self.state,{}
    

    def step(self, action):

        

        return 