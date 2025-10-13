#Dosyalardan Veri Almak

with open("yazilim.txt", "w") as dosya:
    dosya.write("Bu bir örnek dosya içeriğidir.") 

with open("yazilim.txt","r") as dosya:
    dosya.seek(10)
    print(dosya.read())
    
    dosya.seek(5)
    print(dosya.read())
    
    dosya.seek(8)
    print(dosya.read(6))
    
    dosya.seek(7)
    str1 = dosya.read(2)
    dosya.seek(1)
    str2 = dosya.read(5)
    print(str1,str2)
"""
seek(n): Dosya işaretçisini (okuma pozisyonunu) n baytına (karakterine) taşır.
read(n): Mevcut konumdan başlayarak dosyadan n bayt okur. Eğer n belirtilmezse, mevcut pozisyondan itibaren dosyanın geri kalanını okur.
"""
    