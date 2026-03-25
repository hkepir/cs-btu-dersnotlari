#Degiskenler

Kisi = ["Python",1999,"Istanbul","Blogger"]

d1 = "Hello World"
d2 = 89
d3 = 2.54


# Degisken Isimlendirirken Onemli
"""
Ozel semboller kullanilmaz
Python'a ait ifadeler degisken adi olarak kullanilmaz (if gibi ancak _if olarak kullanilabilir)
Python da gercek sabit kavrami yoktur
Degisken isimleri buyuk kucuk harfe duyarlidir
Degisken isimleri rakamla baslayamaz
"""

degisken = 2
Degisken = 3
print(degisken)
print(Degisken)

#Islemler
a = "Hello"
b = "World"
c = 5

print(a+b)
print(a+" "+b)
print(a*3)
print(3*c)

"""print(a+c) impossible cause they're different type variable
"""

#Note : Tuple Unpacking (Coklu atama)
s1 = 1
s2 = 2
print(s1)
print(s2)
print("---")
s1,s2 = s2,s1
print(s1)
print(s2)

"""
 Example of tuple unpacking in Python:
 Variables can swap values regardless of their data types.
 Here, s1 is a string and s2 is a list. After swapping, s1 becomes the list and s2 becomes the string.

s1 = "merhaba"
s2 = [1, 2, 3]
print(s1, s2)   # merhaba [1, 2, 3]

s1, s2 = s2, s1
print(s1, s2)   # [1, 2, 3] merhaba

"""

#Delete : Degisken Silme
del Degisken

#Local & Global degisken
globalDegisken = 5
def local():
    yerelDegisken = 3
    print(yerelDegisken)
    print(globalDegisken)
local()
print(globalDegisken)
del globalDegisken

print("-----------")

globalDegisken = 5
def local():
    global yerelDegisken 
    yerelDegisken = 8
    print(yerelDegisken)
    print(globalDegisken)
local()
print(globalDegisken)
print(yerelDegisken)


#Temel Fonksiyonlar
print("Base Functions")
print(type(d1))
print(dir(d2))
print(len(d1))
help(str)
number = input("Enter a number: ")
print("number : ",number)