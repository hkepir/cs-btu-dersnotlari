#Bos Veri Tipi
x = None
print(x)

x = 10
print(x)

#Bool
# 0 disindaki tum sayilar true
print(bool(0))
print(bool(23))
print(bool(-1))

#String
a = ""
a = ''
a = """ """
print(type(a))

a = 'Mehmet\'in telefonu bende kalmis.'
a = "Bilgisayar"
a[0]
a[5]
a[-1]
a[1:3]
a[:4]
print(a[2:6:2])
a[::2]
a[::-1] #reverse the string

c1="Ankara"
c2="Antalya"
oku = "{} ve {}".format(c1,c2)
print(oku)

oku2 = f"{c1} ile {c2}"
print(oku2)

print(*"Python",sep="\t") #P    y   t   h   o   n

#String Methods
s = "Istanbul"
s.capitalize()
s.count("a")
s.endswith("l")
s.find("s")
s.isdigit()
s = s.upper()
print(s)


print("----\n\n")

#Liste
liste = [2,3,5,5,4,7,8,9,41]
print("Ilk liste:", liste)

#Liste Metotlari
liste.append(77)
print("append sonrasi:", liste)

liste.append([55,44])
print("liste icine liste eklendi:", liste)

print("5 sayisi kac tane:", liste.count(5))

liste.extend([88,99,66])
print("extend sonrasi:", liste)

liste.insert(0,1)
print("insert sonrasi:", liste)

print("1'in indexi:", liste.index(1))

silinen = liste.pop()
print("pop ile silinen:", silinen)
print("pop sonrasi:", liste)

liste.remove(41)
print("41 silindi:", liste)

liste.reverse()
print("ters cevrildi:", liste)

liste.remove([55,44])

liste.sort()
print("sirali liste:", liste)

liste.clear()
print("liste temizlendi:", liste)

liste2 = [11,12,13,31,21]
sorted(liste2)
print(liste2)
liste2.sort()
print("liste2: ",liste2)

print(min(liste2))
print(max(liste2))
print(3 in liste2)
print(3 in liste)

print("----\n\n")

#Demet(Tuple)
#Nasil olusturulursa oyle kalir
demet = tuple()
demet = ()
print(type(demet))
print(demet)

demet =("***")
print(demet)

demet = ("hi","hi","admin","coding")

print(demet)
print(demet[0])
print(demet[-1])
print(demet.count("hi"))
print(demet.index("coding"))

print("----\n\n")


#Küme (Set)
# Bir eleman yalnizca bir kere bulunur. Tekrar edemez.
# Indexleme durumu yoktur. Karmasik sirada olabilir.
# Eleman eklenip cikarilabilir
kume = set()
kume = {'a','b','c'}
# kume = {} dictionary
print(type(kume))

#Set Methods
set1 = {3,4,5,1}
set2 = {1,9,2,3}

set1.add(11)
print("set1 : ",set1)
set1.difference(set2)
set1.discard(11)
print(set1)
set1.intersection(set2) #kesisim
set1 = set1.union(set2)
set1 = set1.union({5,5,5})

print("----\n\n")

# Sozluk(Dictionary)
# Her veri bir key ile tutulur ve o anahtarin bir degeri (value) vardir.
# key mutlaka int veya str olacak
# value herhangi bir veri tipinde olabilir
# Liste ile ayni tuple ile farkli olarak eleman eklenip cikarilabilir.

bos_sozluk = {}
print(type(bos_sozluk)) 
print(bos_sozluk) # {}

sozluk = dict()
print(sozluk) # {}

eng_dict = {
    "1" : "one",
    "2" : "two",
    "3" : "three"
}

print(eng_dict)
print(eng_dict.items())
print(eng_dict["1"])
eng_dict["4"] = "four" 
del eng_dict["1"]
print(eng_dict.values())
# eng_dict.pop("anahtar")
eng_dict.pop("2")

print("----\n\n")

#Stringden Diger Veri Tiplerine Gecis
a = "111"

a = int(a)
print(type(a))
a = str(a)

a = float(a)
print(type(a))
a = str(a)

a = complex(a)
print(type(a))
a = str(a)

a = bool(a)
print(type(a))
a = str(a)

a = list(a)
print(type(a))
a = str(a)

a = tuple(a)
print(type(a))
a = str(a)

a = set(a)
print(type(a))
a = str(a)

"""
a = dict(a)
print(type(a))
a = str(a)

string dict gecisi yapilamaz 
"""

#Int'den diger veri tiplerine gecis
# str, float, bool gecis var
#tuple,list,set,dict gecis yok

#boolean 
#str, int, float, complex gecis var

#list
#str,tuple,set cevrilebilir

#Stringden Listeye
metin = "l like learning new programs."
liste = metin.split(" ")
print(liste)

#Listeden Stringe
eklenecek_listem = ["Top","Secret",":"]
yeni_metin = "**".join(eklenecek_listem)
print(yeni_metin)
