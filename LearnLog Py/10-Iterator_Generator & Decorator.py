#  _iter_
#  _next_
"""
Iterator, bir veri yapisindaki elemanlari tek tek dolasmayi 
saglayan bir nesnedir. Bir koleksiyon icindeki elemanlari 
sirayla almani saglar.

"""

liste = ['a','b','c','d','e','f']
iterator = iter(liste)
print(next(iterator))
print(next(iterator))
print(next(iterator))
print(next(iterator))
print(next(iterator))
print(next(iterator))
# print(next(iterator))
#Error: StopIteration

print("------")

liste2 = [123,124,125,126]
for i in liste2:
    print(i)

print("------")
#The while loop is functionally equivalent to the for loop
iter_nesnesi = iter(liste2)

while True:
    try:
        i = next(iter_nesnesi)
        print(i)
    except StopIteration:
        break

print("------")

#Make your iterator class
"""
class sayac:
    def __init__(self):
        
    def __iter__(self):
        return self
    def __next__(self):
        if self.i < self.n:
            self.i += 1
            return self.i
        else:
            raise StopIteration
        
s = sayac(3)
for x in s:
    print(x)

"""
class rafdakiKitaplar():
    def __init__(self,kitaplar,raf):
        self.kitaplar = kitaplar
        self.raf = raf
        self.index = -1 # ilk next cagrisinda 0 olacak
    def __iter__(self):
        return self
    def __next__(self):
        self.index += 1
        if(self.index<len(self.kitaplar)):
            return self.kitaplar[self.index]
        else:
            self.index = -1
            raise StopIteration # hata firlatmak icin

kitaplar1 = rafdakiKitaplar(["Simyaci","Calikusu","Yaprak Dokumu","Lara","Bosluk"],"A Rafi")

for i in kitaplar1:
    print(i)

print("-----")

#Generator
#Python'da degerleri tek tek ureten hepsini ayni anda bellege 
#almayan ozel bir iterator turudur.
#generator = iterator ureten ozel bir fonksiyon ama cagrildiginda iterator doner.
#her generator bir iteratordur
#her iterator generator degildir

liste3 = [1,2,3,4,5,6,7,8,9,10,11,12,13]
#tum elemanlar bellekte

def sayac(n):
    i=1
    while i<=n:
        yield i
        i += 1

# otomatik olarak arka planda
# g = sayac(3) 
# generator olusturulur.
"""
while True:
    try:
        x = next(g) #her seferinde calistirilir
        print(x)
    except StopIteration:
        break
"""

for x in sayac(3): # 1
    print(x)       # 2
                   # 3
print("------")

#range fonksiyonu generator nesnesidir.
#for i in range(3,10,2):
#   print(i)
print(range(1,10))

"""
def kupAl():
    cevap = []
    for i in range(1,10):
        cevap.append(i**3)
    return cevap

print(kupAl()) #[1, 8, 27, 64, 125, 216, 343, 512, 729]
"""
def kupAl2():
    for i in range(1,100):
        yield i**3
generator = kupAl2()
iterator = iter(generator)
print(next(iterator))
print(next(iterator))
print(next(iterator))
print(next(iterator))
print("------")

#Generator'lerde List Comprehension
listee = [j**3 for j in range(4,7)]
print(listee)

print("------")

generator1 = (j**3 for j in range(4,7))
itera = iter(generator1)
print(next(itera)) #64
print(next(itera)) #125
print(next(itera)) #216

print("------")

#Decorator
#sadece fonksiyon
#fonksiyonu alir,fonksiyon dondurur
#classlarda da kendimiz kullanabiliriz
"""
def my_decorator(cls):
    cls.yeni = "eklendi"
    return cls

@my_decorator
class A:
    pass

print(A.yeni)
"""

#Nested Function
def first():
    def second():
        print("Second Function")
    print("First Function")
    second()

first()
print("------")

def islem_fonksiyon(islem):
    def topla(*args):
        sonuc = 0
        for i in args:
            sonuc += i
        return sonuc
    def carp(*args):
        sonuc = 1
        for i in args:
            sonuc *= i
        return sonuc  
    if islem == "toplama":
        return topla
    else:
        return carp
    
ornekt = islem_fonksiyon("toplama")
print(ornekt(2,2,2))

ornekc = islem_fonksiyon("carpma")
print(ornekc(50,2))

print("-----")

#decorator function 1
def decorator(func): #func = function olur # func bir parametre
    def wrapper():
        print("Before")
        func()
        print("After")
    return wrapper

def function():
    print("function's working")

func2 = decorator(function) 
func2()

print("-----")

# decorator fuction using @decorator
def decorator(func): #func = function olur # func bir parametre
    def wrapper():
        print("Before")
        func()
        print("After")
    return wrapper

@decorator
def function():
    print("function's working")

function()

print("-----")

import time

def zamanHesapla(func):
    def wrapper(*args,**kwargs):
        baslangic = time.time()
        func(*args,**kwargs)
        bitis = time.time()
        print(f"Islem {bitis-baslangic} saniye surdu")
    return wrapper

@zamanHesapla
def kareleriAl(liste):
    for i in liste:
        print(i**2)

@zamanHesapla
def kupunuAl(liste):
    for i in liste:
        print(i**3)

@zamanHesapla
def topla(a,b):
    print(a+b)

kareleriAl(range(0,10))
print("------")