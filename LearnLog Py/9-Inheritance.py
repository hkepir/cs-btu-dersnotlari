class kitap():
    kutuphaneninAdi = "Universite Kutuphanesi"
    kitapSayisi = 0
    kitapID = 1000

    def __init__(self,ad="-",yazar="-",raf="-",sayfa="-",yayinevi="-"):
        self.ad = ad
        self.yazar =yazar
        self.raf =raf
        self.sayfa =sayfa
        self.yayinevi =yayinevi
        self.kitapSayisi += 1
        self.kitapID += 10
        kitap.kitapID = self.kitapID

    #insatnce methods
    def bilgileriGoster(self):
        return print("Kitabin Adi: {}\n Kitabin Yazari: {}\n Sayfa: {}\n".format(self.ad,self.yazar,self.sayfa))
    def sayfaArttir(self,deger):
        self.sayfa += deger

    #class methods
    @classmethod
    def toplamKitapSayisi(cls):
        return kitap.kitapSayisi
    @classmethod
    def stringIleOlustur(cls,metin):
        ad,yazar = metin.split("-")
        return cls(ad,yazar)
    
    #static method
    @staticmethod
    def kutuphaneAdiSoyle():
        return kitap.kutuphaneninAdi
    

#interitance
class yerelKitaplar(kitap):
    pass

yerelKitap1 = yerelKitaplar("Calikusu","Resat Nuri")
yerelKitap1.bilgileriGoster()

#Overriding & super()
class yabanciKitaplar(kitap):
    def __init__(self,ad="-",yazar="-",raf="-",sayfa="-",yayinevi="-",cevirmen="-"):
        super().__init__(ad,yazar,raf,sayfa,yayinevi)
        self.cevirmen =cevirmen

        
    def bilgileriGoster(self):
        return super().bilgileriGoster()

#Dunder(magic,special) methods
#Dunder stands for “double underscore” and refers to special methods in Python that start and end with __ (e.g., __init__, __str__, __len__).
#These methods are automatically called by Python to define how objects behave.

"""
class Kitap:
    def __init__(self, ad, yazar, sayfa):
        self.ad = ad
        self.yazar = yazar
        self.sayfa = sayfa

    def __str__(self):
        return f"{self.ad} - {self.yazar} ({self.sayfa} sayfa)"

    def __len__(self):
        return self.sayfa

    def __eq__(self, other):
        return self.ad == other.ad and self.yazar == other.yazar

# Test
k1 = Kitap("Calikusu", "Resat Nuri", 200)
k2 = Kitap("Calikusu", "Resat Nuri", 200)
k3 = Kitap("Python 101", "Hilal", 150)

print(k1)          # __str__ → Python 101 - Hilal (150 sayfa)
print(len(k1))     # __len__ → 200
print(k1 == k2)    # __eq__ → True
print(k1 == k3)    # __eq__ → False
"""