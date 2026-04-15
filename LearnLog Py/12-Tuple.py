"""
# ------LIST------

# mutable sirali koleksiyon
# dinamik veri listeleri
list = [1,2,3]
list.append(4)
print(list) # [1,2,3,4]

# ------TUPLE------

# immutable veri yapisi
# sabit veri gruplari
tuple = (1,2,3)
print(tup[0]) # 1

# ------DICTIONARY (dict)------

# key-value eslestirmesi
# veri erisimini hizlandirmak icin
dct = {"ad": "Hilal", "yas": 25}
print(dct["ad"])   # Hilal

# ------SET------
# unique elemanlardan olusan koleksiyon
# tekrar eden verileri filtrelemek icin
st = {1, 2, 2, 3}
print(st)   # {1, 2, 3}

# ------ARRAY------
# python da list dizi gibi kullsnilir ancak
# array modulu veya NumPy kutuphanesi ile daha verimli diziler olusturulabilir
import array
arr = array.array('i', [1, 2, 3])
print(arr[1])   # 2
"""


import random
import statistics

kullanici_listesi = []
kullanici_dict = {}

for i in range(1,1001):
    yas = random.randint(18,65) # 18-65 arasi rastgele yas
    skor = random.randint(0,1000) # 0-1000 arasi rastgele skor
    tup = (i,yas,skor) 

    kullanici_listesi.append(tup)
    kullanici_dict[i]=tup

    """
    #Tuple Liste Icinde Arka Arkaya Duruyor
    kullanici_listesi = [
    (1, 30, 500),
    (2, 22, 750),
    (3, 40, 200),
    ...
    ]

    """
    """
    #Dictionaryde ise anahtar -> id , value -> tuple 
    {
    1: (1, 30, 500),
    2: (2, 22, 750),
    3: (3, 40, 200),
    ...
    }

    print(kullanici_dict[2])
    (2, 22, 750)

    for key, value in kullanici_dict.items():
    print("ID:", key, "->", value)

    """

#-------------------ANALIZ---------------------

yaslar = [t[1] for t in kullanici_listesi]
skorlar = [t[2] for t in kullanici_listesi]

print("Toplam Kullanici:", len(kullanici_listesi))
print("Ortalama Yas:", round(statistics.mean(yaslar), 2))
print("Ortalama Skor:", round(statistics.mean(skorlar), 2))
print("En Genc Kullanici:", min(yaslar))
print("En Yasli Kullanici:", max(yaslar))
print("En Yuksek Skor:", max(skorlar))
print("En Dusuk Skor:", min(skorlar))

max_skor = max(skorlar)
for tup in kullanici_listesi:
    if tup[2] == max_skor:
        print(" En yüksek skorlu kullanici:", tup)
        break