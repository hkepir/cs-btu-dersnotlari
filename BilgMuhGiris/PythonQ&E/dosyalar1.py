#Dosya Oluşturmak
#f = open(dosya_adı, kip)

    #'w' yazma kipinde acma
    #tahsilat_dosyası = open("tahsilat_dosyası.txt", "w")
    #hangi dizin altında ise orada oluşur

    #dosya = open("/dosyayı/oluşturmak/istediğimiz/dizin/dosya_adı", "w")
    #belirtilen dizin altında dosya açılır

    #Dosyaya Yazmak
    #dosya.write(yazılacak_şeyler)
    
    #Ornek
    """
    dosya = open("yazilim.txt","w")
    dosya.write("NABER")
    
    
    dosya = open("yazilim.txt","a") #var olan dosyayı degistirir
    dosya.write(" Nasılsın?") 
    """
    
#Dosya Okuma
    
#yazilim.txt içinde şunların bulundugu var sayılmıştır.
    """
    Python : Guido Van Rossum
    Java : James Gosling
    C : Dennis Ritchie

    """

dosya = open("yazilim.txt","r") # boyle bir dosya yoksa dosya bulunamadı hatası veriri

except FileNotFoundError:
    print("Dosya Bulunamadı")
    

# read() fonksiyonu tüm dosyayı okumamızı saglar
print(dosya.read())
    
    #Çıktı
    """
    Python : Guido Van Rossum
    Java : James Gosling
    C : Dennis Ritchie

    """
    
    
#Tek bir satırı okumak istiyorsak
dosya = open("yazilim.txt","r")
print(dosya.readline())
    
    #Çıktı
    """
    Python : Guido Van Rossum
    
    Not:satırlar readline ile tek tek okutulursa satırlar arası iki basluk bırakarak yazar
    """

#readlines fonksiyonu liste şeklinde çıkarır
dosya = open("yazilim.txt","r")
print(dosya.readlines())
     
     #Çıktı
    """
    ['Python : Guido Van Rossum\n', 'Java : James Gosling\n','C : Dennis Ritchie\n']
    """
    
dosya = open("yazilim.txt","r")
liste = dosya.readlines()

print(liste[1]) #2.satırı almış olur

    #Çıktı
    """
    Java : James Gosling
    """
     
#Dosya Kapatma İşlemi
dosya.close()
    
    
#Kullanıcı Unuttuğunda pythonda otomatik kapatma with open("dosyaAdi","kip") as ...:
with open ("yazilim.txt","r") as dosya:
    print(dosya.read())
    
    
    
    
    
    
    
    