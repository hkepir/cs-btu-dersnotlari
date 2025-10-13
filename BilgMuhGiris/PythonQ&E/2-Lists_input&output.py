#python egzersizler

#KONU: Degiskenler
print(type(12))
#>class'int'>
print(type(2.14))
#>class'float'>
print(type("python"))
#>class'str'>
print(type([1,2,3,4]))
#>class'list'>
print(type((1,2,3,4)))
#>class'tuple'>
print(type({"elma":"meyve"}))
#>class'dict'>

f=3
print(str(f))
#3
print(type(f))
#<class 'int'>
print(type(str(f)))
#<class 'str'>
print(str(4))
#4

#KONU: Listeler-----------------------------------------


a=[23,32,44,"python",10]#liste bastırma
print(a)

print("python"[0])

#listede değer degistirme
a[0]=11
print(a)
#listeye eleman ekleme
#1
a.append("hilal")
print(a)
#2
a=a+["kepir"]
print(a)

#listede istenen yere kadar eleman bastırma
print("hilal"[3:])#ilk 3 harten sonra bastır
print("hilal"[:3])#ilk 3 harfi bastır
print("hilal"[:])#tamamını bastırır
print("hilal"[2:])#ilk iki harften sonra bastır

letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g']
print(letters)
#['a', 'b', 'c', 'd', 'e', 'f', 'g']

# replace some values
letters[2:5] = ['C', 'D', 'E']
print(letters)
#['a', 'b', 'C', 'D', 'E', 'f', 'g']

# now remove them
letters[2:5] = []
print(letters)
#['a', 'b', 'f', 'g']

# clear the list by replacing all the elements with an empty list
letters[:] = []
print(letters)
#[]


a = ['a', 'b', 'c']
n = [1, 2, 3]
x = [a, n]
newlist=[['a', 'b', 'c'], [1, 2, 3]]
print(newlist[0])
#['a', 'b', 'c']
print(newlist[0][1])
#'b'
print(newlist[1][1])
#'2'


#KONU:input-output---------------------------------------------------------------
x=input()
print(x)

sayi1=input("Birinci sayiyi giriniz:")
sayi2=input("ikinci sayiyi giriniz:")
sayi3=input("ucuncu sayiyi giriniz:")
print("sayıların toplamı=",int(sayi1)+int(sayi2)+int(sayi3))
#hata print("sayıların toplamı=int(sayi1)+int(sayi2)+int(sayi3)")
#hata print("sayıların toplamı=",int(a+b+c))
#hata print("sayıların toplamı=",a+b+c)

print("Oyuncu Kaydetme Programi")
ad=input("Oyuncunun adi:")
soyad=input("Oyuncunun soyadi:")
takim=input("Oyuncunun takimi:")

bilgiler=[ad,soyad,takim]

print("Database'e Kaydediliyor...")
print("Oyuncunun adi:",ad,"Oyuncunun soyadi:",soyad,"Oyuncunun takimi:",takim)
print("Kaydedildi...")

#input&formatMethodu---------------------------------------------------------

print("Oyuncu Kaydetme Programi")
ad=input("Oyuncunun adi:")
soyad=input("Oyuncunun soyadi:")
takim=input("Oyuncunun takimi:")

bilgiler=[ad,soyad,takim]

print("Database'e Kaydediliyor...")

print("Oyuncunun adı:{} \nOyuncunun soyadi:{} \nOyuncunun takimi:{}".format(bilgiler[0],bilgiler[1],bilgiler[2]))
#print("Oyuncunun adi:",ad,"Oyuncunun soyadi:",soyad,"Oyuncunun takimi:",takim)

print("Kaydedildi...")

