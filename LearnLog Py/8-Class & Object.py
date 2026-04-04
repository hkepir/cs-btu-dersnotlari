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

kitap1.ad = "Bosluk"
kitap1.yazar = "Ahmed Gunbay Yildiz"
kitap1.raf = "B88"
kitap1.sayfa = 196
kitap1.yayinevi = "Timas Yayinlari"

print(kitap1.ad)

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

kitap2 = kitap("Simayci","Paulo Coelho","B23",184,"Can Yayinlari")  
print(kitap2.sayfa) 