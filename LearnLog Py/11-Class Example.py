#Example 1

#decorator : log_islem
def log_islem(fonksiyon):
    def wrapper(*args, **kwargs):
        print(f"{fonksiyon.__name__}: metodu calistirildi\n")
        return fonksiyon(*args, **kwargs)
    return wrapper

class Araba:
    toplam_araba_sayisi = 0 #class variable

    def __init__(self, marka, model, yil, renk):
        self.marka = marka
        self.model = model
        self.yil = yil
        self.renk = renk
        Araba.toplam_araba_sayisi += 1

    #instance method change_color
    @log_islem
    def change_color(self, new_color):
        eski_renk = self.renk
        self.renk = new_color
        print(f"{self.marka} arac rengi {eski_renk} -> {new_color} olarak degistirildi.")

    #classmethod galeri_durumu sinifin geneliyle islem
    @classmethod
    @log_islem
    def galeri_durumu(cls):
        return f"Galeride toplam {cls.toplam_araba_sayisi} adet arac kayitli."

    #static method: bagimsiz yardimci fonksiyon (self veya cls almaz)
    @staticmethod
    def yas_hesapla(yil):
        current_year = 2026
        return current_year - yil

    def __str__(self):
        return f"{self.marka} {self.model} ({self.yil}) - {self.renk}"

class Galeri:
    def __init__(self, ad):
        self.ad = ad
        self.arabalar = []

    def araba_ekle(self, araba):
        self.arabalar.append(araba)

    #iterator: Nesneyi donguye uygun hale getirir
    def __iter__(self):
        self._index = 0
        return self

    def __next__(self):
        if self._index < len(self.arabalar):
            sonuc = self.arabalar[self._index]
            self._index += 1
            return sonuc
        else:
            raise StopIteration

    #generator
    def araba_uretici(self):
        for araba in self.arabalar:
            yield f"Uretilen: {araba.marka}"

arac1 = Araba("Renault", "Megane", 2015, "White")
arac2 = Araba("Fiat", "Linea", 2016, "Red")

galeri = Galeri("Yilmaz Galeri")
galeri.araba_ekle(arac1)
galeri.araba_ekle(arac2)

print(Araba.galeri_durumu())
arac1.change_color("Blue")
print(f"Arac yasi: {Araba.yas_hesapla(arac1.yil)}")

print("-" * 30)

for araba in galeri:
    print(araba)

print("-" * 30)

gen = galeri.araba_uretici()
for isim in gen:
    print(isim)