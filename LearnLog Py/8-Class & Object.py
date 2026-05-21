print("kitap")
#print(kitap) yazilabilmesi icin 
#kitap nesne tabanli bir sey olmali (funct.,class,obj.)

"""
#class of kitap
class kitap():
    pass

#the object of  kitap
kitap1 = kitap()
print(kitap1)
"""
#Make an object of data types
"""
sozluk = dict()
kume = set()
numbers = int()
liste = list()
"""
"""
kitap1.ad = "Bosluk"
kitap1.yazar = "Ahmed Gunbay Yildiz"
kitap1.raf = "B88"
kitap1.sayfa = 196
kitap1.yayinevi = "Timas Yayinlari"

print(kitap1.ad)
"""
#Python da ayni isimde class/function tanimlamak teknik olarak mumkun
#Ancak en son tanim gecerli olur.


#Python'da moduller, fonksiyonlar ve siniflar kendi namespacelerine sahiptir.
#Ayni isim farkli namespacelerinde kullanilabilir
#C++ namespace kelimesi ile acikca tanimlanir.
#Java paket (package) namespace gorevi gorur.Ayni isimli siniflar farkli paketlerde bulunabilir.

"""
class kitap():
    def __init__(self): #initialize
        pass
"""

#instance methodlar self almak zorundadir.
#self o an cagirilan nesneyi kast eder
"""class Araba:
    def hizlan(self):
        print("Hızlandı")
"""
#araba.hizlan() python bu komutu arka planda su sekilde calistirir
#Araba.hizlan(araba) yani nesneyi ilk parametre olarak otomatik gonderir.

#-------------------------------------------------------------
@staticmethod
class A:
    @staticmethod
    def topla(x, y):
        return x + y
#self yok
#nesneye erişim yok

#Çağırma:
A.topla(2, 3)

@classmethod
class A:
    @classmethod
    def bilgi(cls):
        print(cls)
#self yerine cls kullanılır
#sınıfı temsil eder
#-------------------------------------------------------------


class kitap():
    def __init__(self,ad,yazar,raf,sayfa,yayinevi):
        self.ad = ad #self, nesnenin ye ait demek 
        self.yazar = yazar
        self.raf = raf
        self.sayfa = sayfa
        self.yayinevi = yayinevi
    def sayfaArttir(self,deger):
        self.sayfa += deger

kitap2 = kitap("Simayci","Paulo Coelho","B23",184,"Can Yayinlari") 
kitap2.sayfaArttir(6) 
print(kitap2.sayfa) 
print("------")

#Class Methods
class book():
    def __init__(self,name = "-",author="-"):
        print("init fonksiyonu calisti")
        self.name = name
        self.author = author
    def printInfo(self):
        return "Book name: {}\nAuthor: {}\n".format(self.name,self.author)

book_default = book()
print(book_default.printInfo())

book1 = book("Siyah Lale","Alexsander Dumas")
print(book1.printInfo())

print("--------")

#Class Variable & Instance Variable
class Student():
    #class variable(uretilen her nesne icin ortak)
    school_name = "Python Academy"
    student_number = 0
    ID = 1000

    def __init__(self, name, age):
        # Instance variables (her nesneye ozgu)
        self.name = name
        self.age = age
        Student.ID +=10 
        self.ID = Student.ID
        Student.student_number += 1

    def I_method(self):
        print("I method")
    
student1 = Student("Hilal", 22)
student2 = Student("Ayse", 24)

# accessing class variable 
print("Okul adi:", Student.school_name)

# accessing instance variable 
print("std 1:", student1.name, "-", student1.age)
print("std 2:", student2.name, "-", student2.age)


print("std1 okul:", student1.school_name)
print("std2 okul:", student2.school_name)


Student.school_name = "Advanced Python School"
print("new school name:", student1.school_name)
print("new school name:", student2.school_name)

student1.school_name = "Updated"
print("new school name:", student1.school_name)
print("new school name:", student2.school_name)

print("How many students are there? ",Student.student_number)
print("std1 ID:",student1.ID)
print("std2 ID:",student2.ID)

student1.I_method()
Student.I_method(student1)


"""
Student.I_method()
    does not work because  is an instance method and expects a parameter ().
    When you call it directly from the class, Python does not automatically pass an instance, so you get a TypeError.
    Instance methods belong to the object (instance). They require  to access instance-specific data.
    Class methods and static methods belong to the class itself.
    Class methods use  and can access class variables.
    Static methods do not take  or  and behave like regular functions inside the class.

"""

print("------")

class petshop():
    pet_number = 0

    def __init__(self,parent_name="-",pet_name="-"):
        self.parent_name = parent_name
        self.pet_name = pet_name
        petshop.pet_number += 1

    #instance method
    def voice(self):
        print(f"{self.pet_name} says: Woof!")
    
    #class method
    @classmethod
    def total_pets(cls):
        print(f"Total pets in shop: {cls.pet_number}")

    #static method
    @staticmethod
    def shop_info():
        print("Welcome to the PetshopPy")

pet1 = petshop("Hilal","Pamuk")
pet2 = petshop("Ahmet","Cat")
pet1.voice()
pet1.shop_info()

petshop.shop_info()
petshop.total_pets()