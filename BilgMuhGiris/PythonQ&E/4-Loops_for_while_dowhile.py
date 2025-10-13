#KONU:Döngüler

#Liste Bastırma

liste=["Elma","Armut","Kiraz"]

for i in liste:
    print(i)

print (*range(10))
#print(*range(6,10))
#print(*range(0,10,3))


#Dik Ucgen
"""
for i in range (1,10):
    print(i*"*")
"""

#Faktoriyel Hesabi
"""
faktoriyel =1

while True:
    sayi= int(input("Pozitif bir sayi giriniz:"))
    if (sayi<=0):
        print("Pozitif bir sayi giriniz:")
    else:
        for i in range(1,sayi+1):
            faktoriyel *= i
            
        print("Faktoriyel",faktoriyel)#print(f"{sayi} sayısının faktöriyeli: {faktoriyel}")
        break
"""
#Fibonacci Dizisi
"""
# the sum of two elements defines the next
a, b = 0, 1
while a < 10:
    print(a)
    a, b = b, a+b
"""







#Break&Continue
"""
# Doğru kullanıcı adı ve parola
dogru_kullanici_adi = "admin"
dogru_parola = "12345"

while True:
    # Kullanıcıdan giriş bilgilerini al
    kullanici_adi = input("Kullanıcı adını girin: ")
    parola = input("Parolanızı girin: ")

    # Boş giriş kontrolü
    if kullanici_adi.strip() == "" or parola.strip() == "":
        print("Kullanıcı adı ve parola boş bırakılamaz. Tekrar deneyin.")
        continue  # Döngünün başına dön

    # Kullanıcı adı ve parolayı kontrol et
    if kullanici_adi == dogru_kullanici_adi and parola == dogru_parola:
        print("Giriş başarılı!")
        break  # Döngüden çık
    else:
        print("Hatalı kullanıcı adı veya parola. Tekrar deneyin.")
"""
listeler = [2,3,4]

for i in range (1,10):
    if(i in listeler):
        continue
    print(i)
#continue kullanımı dikkat sonsuz döngüye girebilir
    
    