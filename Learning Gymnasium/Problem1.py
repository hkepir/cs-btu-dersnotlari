"""
Sayi Denge Problemi

Ajan baslangicta 50 degeri ile baslasin
her adimda +1 veya -1 hareket edebilir
ortamin amaci sayiyi 0-100 arasinda tutarken 
50 ye yakin olmasini saglamak

"""

import numpy 

class SimpleEnv:
    def __init__(self):
        self.durum = None
        self.action_space = [0,1] #0 ya da 1
        self.observation_space = (0,100) # 0-100 arasi sayi
        self.sayac = 0

    def reset(self):
        self.durum = 50.0
        self.sayac = 0 # her bolum basinda sayac sifirlanir
        return self.durum
    
    def step(self,action):
        if action == 1:
            self.durum += 1
        else:
            self.durum  -= 1
        
        odul = -abs(self.durum-50)   
        self.sayac += 1 
        terminated = (self.durum < 0 or self.durum >100) # bolum bitis kosulu
        #bolumu belirli bir adimdan sonra bitirmek istersem 
        #terminated = (self.durum < 0 or self.durum >100 or sayac >= 20) 20 adim sonra bitir
        #sayac ajanin zamana karsi plan yapmasini gerektirir, daha stratejik davranir
        
        return self.durum,odul,terminated 
        # ortamin yeni durumu, odul , bolumun bitip bitmedigini veren boolean degeri
        # tuple (demet) olarak dondurulur


#rastgele aksiyon secerek ,ortam calisiyor mu 
ortam = SimpleEnv()
guncel_durum = ortam.reset()

print("\nBaslangic Durumu: ",guncel_durum)

for i in range(10):
    aksiyon = numpy.random.choice([0,1])
    guncel_durum,reward,terminated = ortam.step(aksiyon) 
    print(f"Adım {i+1}: Action={aksiyon}, State={guncel_durum}, Reward={reward}")
    if terminated:
        print("Bolum Bitti!\n")
        break