#Moduller
"""
import math
#dir(math)
#help(math) 

math.sqrt(16)
math.sin(30)
"""
import math as matematik
matematik.sqrt(25)

from numpy import array, random

a = array([1, 2, 3, 4])
print("Array:", a)

r = random.randint(10, size=5)
print("Random numbers:", r)

print("-----")

#Kendi Modulunu Olusturma
import my_modul
my_modul.yaz()
my_modul.kiyas(10,11)

