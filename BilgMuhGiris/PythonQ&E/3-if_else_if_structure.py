#KONU:Donguler


yas = int(input("Yasinizi Girin:"))
if yas >= 18:
    print("Ehliyet alabilirsin")

else:
    print("Ehliyet Sınavina Basvuru Yapamazsiniz")


#not hesaplama
"""
note = float(input("Notunuzu Giriniz:"))

if note >= 90:
    print("pekiyi")
elif note >=50:
    print("orta")
else:
    print("zayif")

"""

"""    
       ==(Operatörü)
sayıların eşitliğini kontrol etme 
farklı tipleri karsılaştırma x=10 y="10" print(x == y)
x y farklı biri sayi biri string
koşullarda kullanımı if age == 18:
listelerin eşitliğini kontrol etme print(list1==list2)

        a and b
if a and b
        a or b
not a
not true değeri false yapar, false degeri true yapar


"""
"""
# Kullanıcıdan yaş ve puan bilgilerini alalım
yas = int(input("Yaşınızı girin: "))
puan = int(input("Puanınızı girin: "))

# Koşul kontrolü
if yas >= 18 and puan >= 50:
    print("Tebrikler! Hem yaşınız hem de puanınız yeterli.")
elif yas >= 18 and puan < 50:
    print("Yaşınız yeterli, ancak puanınız yetersiz.")
elif yas < 18 and puan >= 50:
    print("Puanınız yeterli, ancak yaşınız yetersiz.")
else:
    print("Maalesef, hem yaşınız hem de puanınız yetersiz.")
"""

"""
Döngü Değişkeni Başlatma #şart değil,sonsuz döngülerde kullanılmaz
while (koşul):
(Girinti) Yapılacak İşlemler
          Arttırma İşlemleri a=a+1 a+=1
"""
# Önceden tanımlanmış kullanıcı adı ve parola
dogru_kullanici_adi = "admin"
dogru_parola = "12345"

while True:
    # Kullanıcıdan giriş bilgilerini al
    kullanici_adi = input("Kullanıcı adını girin: ")
    parola = input("Parolanızı girin: ")

    # Kullanıcı adı ve parolayı kontrol et
    if kullanici_adi == dogru_kullanici_adi and parola == dogru_parola:
        print("Giriş başarılı!")
        break
    elif (kullanici_adi == dogru_kullanici_adi and parola != dogru_parola):
        print("Hatalı parola. Tekrar deneyin.")
    elif (kullanici_adi != dogru_kullanici_adi and parola == dogru_parola):
        print("Hatalı kullanıcı adı . Şifreyi değiştirmek ister misiniz?(E/H)")
        cevap = input()
        if (cevap=="E"):
            
            yeniParola = input("Yeni parola:")
            print("Lütfen Bekleyin")
            defparola = yeniparola
            print("Şifre  basarıyla degistirildi")
            
    else:
        print("Tekrar Deneyin")
            

