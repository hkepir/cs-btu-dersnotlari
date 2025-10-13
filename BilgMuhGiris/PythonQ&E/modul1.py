#Ozet

#Input-Liste
"""
a =input()
print(a)


print("Ogrenci Kaydetme Programi")
ad=input("Ogrenci adi:")
soyad=input("Ogrenci soyadi:")
numara=input("Ogrencinin numarasi:")
bilgi=[ad,soyad,numara]

print("Database'e Kaydediliyor...")
print("Oyuncunun adi:",ad,"Oyuncunun soyadi:",soyad,"Oyuncunun numarasi:",numara,)
print("Kaydedildi...")
"""


#if-else
"""
sayi =int(input("Bir sayi giriniz:\n"))
if sayi >=0:
    print("Sayi pozitif")
elif sayi == 0:
    print("Sayi sifira esit")
else :
    print("Sayi sifirdan kucuk")
"""  
#Donguler

"""
dizi = [1,2,3,4,5,6]
toplam = 0

for i in dizi:
    if i%2==0:
        print(str(i) + " *")
        #print(f"{i} *")
        #print("%d *" % i)
    else:
        print(i)
        toplam +=i

print("Toplam:"+str(toplam))
"""

#Fuction
"""
def BasitBolme(sayi):
    sayi=int(sayi)
    if sayi % 3==0 and sayi % 5==0:
        sonuc = "@" + str(sayi) + "@"
    if sayi %3==0:
        sonuc = "?"+str(sayi)+"?"
    if sayi %5==0:
        sonuc ="@"+str(sayi)+"@"
    else:
        sonuc ="#"+str(sayi)+"#"
    return sonuc  #return ifadesi olmazsa sonuc hep none doner

sayi = input("Sayi Girin:")
sonuc = BasitBolme(sayi)
print(sonuc)

"""
#---------------------------------------------------------------------------------------------------------------------------------------------------------------
#Modüller
#---------------------------------------------------------------------------------------------------------------------------------------------------------------
"""
Modül (Python):
Kapsam: Bir modül, bir veya daha fazla fonksiyon, değişken, sınıf ve hatta diğer modülleri içerebilen bir dosyadır.
Amaç: Kodun büyük yapı taşlarını yönetmek için kullanılır. Kodun modüler olmasını sağlar, yani belirli işlevleri yerine getiren kod parçalarını mantıksal birimler olarak ayırır.
Kullanım: Modüller, import ifadesiyle içe aktarılır ve kullanılabilir.
"""

def hello():
    print("Hi!")

def mutlak(sayi):
    if(sayi<0):
        return -sayi
    return sayi
    

    
#fonksiyonlardan birini aktarma--------------------

import modul1
print(modul1.mutlak(-120))

from modul1 import mutlak


#modul1 deki tum fonksiyonları aktarma------------   

from modul1 import *
hello()
    
#Hazır Kutuphaneler-------------------------------

import math

print(math.factorial(6))
    
    
        
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    