#Python da fonksiyonlar 2'ye ayrilir
#Bir deger donduren (reteurn)
#Hicbir sey dondurmez (none)
#donus tipi fonksiyon tipini de belirlemis olur. Dynamic
def welcome():
    print("welcome")

welcome()

def welcome(user):
    print("welcome ",user)

welcome(3)
welcome("San")
"""
name = input("Enter a name :")
welcome(name)
"""
#Python da fonksiyon overloading yoktur.
#En son yazilan fonksiyon, önceki tum welcome fonksiyonlarini siler
def welcome(name,surname):
    print("welcome ",name,surname)

welcome("Ms.","Wilson")

def welcome(name=None, surname=None):
    print("welcome", name, surname)

welcome()
welcome("San")
welcome(3)
welcome("Ms.","David")
print("-----")

def sayi_yaz():
    for i in range(5):
        print(i)

sayi_yaz()

print("-----")
#Python da fonksiyonlar birer nesnedir (object)
#sayi_yaz fonksiyonu, welcome fonksiyonunu refere etsin
sayi_yaz = welcome
sayi_yaz()
welcome()

# Argumanlar *args 
# works like tuple

def selam(*args):
    print("selam",*args)

selam("Sana","Imparator")
print("-----")

def meyve_sepeti(*meyve):
    print("Sepetteki Meyveler: ")
    for m in meyve:
        print(m)

meyve_sepeti("Apple","Banana","Orange","Berry")
print("-----")

# Keyword Argumans **kwargs
# works like dict 

def calisan(**bilgi):
    print("Soyadi:",bilgi["soyad"])
    print("Adi:",bilgi["ad"])
    print("Dogum Tarihi:",bilgi["dt"])
    print("Sehir:",bilgi["sehir"])

calisan(ad="Ali",soyad="Korkmaz",dt="1990",sehir="Ankara")
print("-----")

#return
def topla(x,y):
    print(x+y)

sonuc = topla(3,3)
print("-----")

#pass
#bos fonksiyon
#iskeleti kurup detaylari eklemek icin kullanilabilir 

def bos_fonksiyon():
    pass

#Lambda
#Fonksiyonlai kisa sekilde yazma
"""
def cikar(x,y):
    print(x+y)
"""
cikar = lambda num1,num2 : num1-num2
print(cikar(5,5))

carp = lambda num1,num2 : num1*num2
print(carp(5,5))

print("-----")

# Python Fonksiyonları Özet Notlar 

# 1. Fonksiyonlar belirli işleri tekrar kullanılabilir şekilde yapar.
def selam():
    print("Merhaba")

# 2. Fonksiyon tanımlama:
def topla():
    pass

# 3. Parametre ile veri alır:
def selam(isim):
    print(isim)

# 4. return ile değer döndürür:
def kare(x):
    return x*x

# 5. print vs return farkı:
def f(): print(5)
def g(): return 5

# 6. return yoksa None döner:
def test(): pass
print(test())

# 7. Birden fazla return:
def kontrol(x):
    if x > 0:
        return "pozitif"
    return "negatif"

# 8. Varsayılan parametre:
def selam(isim="Misafir"):
    print(isim)

# 9. Keyword argument:
def bilgi(ad, yas):
    print(ad, yas)
bilgi(yas=20, ad="Ali")

# 10. Positional argument:
def bilgi(ad, yas):
    print(ad, yas)
bilgi("Ali", 20)

# 11. *args kullanımı:
def topla(*sayi):
    return sum(sayi)

# 12. **kwargs kullanımı:
def yaz(**veri):
    print(veri)

# 13. Local variable:
def f():
    x = 10
# 14. Global variable:
x = 5
def f():
    print(x)

# 15. global keyword:
x = 5
def degistir():
    global x
    x = 10

# 16. Fonksiyon içinde fonksiyon:
def dis():
    def ic():
        print("İç")
    ic()

# 17. First-class function:
def f(): pass
x = f

# 18. Fonksiyon değişkene atanır:
def selam(): print("hi")
x = selam

# 19. Fonksiyon parametre olur:
def uygula(f, x):
   return f(x)

# 20. Fonksiyon return edilir:
def dis():
    def ic(): return 5
    return ic

# 21. lambda fonksiyonu:
kare = lambda x: x*x

# 22. recursive fonksiyon:
def fact(n):
    if n == 1:
        return 1
    return n * fact(n-1)

# 23. map kullanımı:
list(map(lambda x: x*2, [1,2,3]))

# 24. filter kullanımı:
list(filter(lambda x: x%2==0, [1,2,3,4]))

# 25. higher order function:
def uygula(f, x): return f(x)

# 26. closure:
def dis(x):
    def ic(y): return x + y
    return ic

# 27. decorator:
def deco(f):
    def wrapper():
        print("before")
        f()
        print("after")
    return wrapper

# 28. type kontrol:
def f(): pass
print(type(f))

# 29. type hint:
def topla(a: int, b: int) -> int:
    return a + b

# 30. stack frame:
def f(x):
    y = x + 1
    return y