#Functions

"""
def merhaba(): # without parameter
    print("Merhaba Dunya")
"""
#Factoriyel Function
"""
def factoriyel (numara):
    factoriyel = 1
    for i in range (1,numara+1):
        factoriyel *= i
    print("factoriyel:",factoriyel)
   

sayi = int(input("Sayıyı Giriniz: "))
factoriyel(sayi)
factoriyel(3)
factoriyel(5)

"""
#Functions&Return
"""
a = factoriyel(sayi)
print(a)
#none
#Because we didn't write a return statement in the function, it can't return a value to the variable a
"""
#Kok Bulma Fonksiyonu

"""
def kokbul(a,b,c):
    delta = (b*b-4*a*c)
    if(delta<0):
        print("Reel Kok Bulunamadı")
         

    x1=(-b - delta**0.5)/(2*a)
    x2=(-b + delta**0.5)/(2*a)
    
    return(x1,x2)

a = int(input("a:"))
b = int(input("b:"))
c = int(input("c:"))

sonuc = kokbul(a,b,c)
print(sonuc)

"""
#Fonksiyonlarda Varsayılan Degerler

def kayit_ekle(ad="bilgi yok",soyad="bilgi yok",yas="bilgi yok",meslek="bilgi yok"):
    
    print("Kayit Ekleniyor.")
    
    print("Ad:{}\n Soyad:{}\n Yas:{}\n Meslek:{}\n".format(ad,soyad,yas,meslek))
    
    print("Kayit Basariyla Eklendi")
    
kayit_ekle("Mustafa Murat","Coskun")

kayit_ekle("Mustafa Murat","Coskun")
#sıralı girildiğinde , sıralı girilmezse python algılayamaz

#alternatif cozumler
kayit_ekle(ad = "Mustafa Murat",soyad ="Coskun",yas=23)















