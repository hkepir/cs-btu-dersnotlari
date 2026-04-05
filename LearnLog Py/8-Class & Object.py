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
class kitap():
    def __init__(self,ad,yazar,raf,sayfa,yayinevi):
        self.ad = ad
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

