#Python da fonksiyonlar 2'ye ayrilir
#Bir deger donduren (reteurn)
#Hicbir sey dondurmez (none)

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