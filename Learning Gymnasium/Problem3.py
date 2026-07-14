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

        self.action_space = spaces.Discrete(4)
        
        self.observation_space = spaces.Dict(
            {
                "robot_konumu":spaces.Discrete(3),
                "paket_sirtta_mi":spaces.Discrete(2),
                "pil_seviyesi":spaces.Discrete(4),
                "engel_var_mi":spaces.Discrete(2),
                "paket_tipi":spaces.Discrete(2)

            }
        )

        self.state = None
        self.sayac = 0
        self.max_step = 20

    def reset(self,seed = None, options = None):
        paket_tipi = np.random.choice([0,1]) # 0: hafif paket, 1: agir paket
        engel_var_mi = np.random.choice([0,1]) # 0: engel yok, 1: engel var

        self.state = {
            "robot_konumu":0,
            "paket_sirtta_mi":0,
            "pil_seviyesi":self.max_pil,
            "engel_var_mi":engel_var_mi,
            "paket_tipi":paket_tipi            
        }

        self.sayac = 0
        return self.state,{}
    

    def step(self, action):

        

        return 