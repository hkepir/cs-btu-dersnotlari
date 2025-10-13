#Dosyalarda Degisiklik Yapmak

#Otomatik En Sona Ekler
with open ("yazilim.txt","a") as dosya:
    dosya.write ("Php : Rasmus Lerdorf")
    
#En Basa Ekleme
with open("yazilim.txt","r+") as dosya:
    data = dosya.read()
    dosya.seek(0)
    data = "Php : Rasmus Lerdorf\n" + data
    dosya.write(data)
  
#Dosyanın Ortasına Ekleme

#insert Fonk.
"""
liste = [1,2,3,4,5]
liste.insert(1,15)
print(liste)

Cıktı
[1,15,2,3,4,5]
"""
with open("yazilim.txt","r+") as dosya:
    data = dosya.readlines()
    data.insert(1,"Php : Rasmus Lerdorf\n")
    #liste 1 eleman arttı
    dosya.seek(0)
    dosya.writelines(data)
    
#https://python-istihza.yazbel.com/temel_dosya_islemleri.html