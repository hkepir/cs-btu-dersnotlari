#Bos Veri Tipi
x = None
print(x)

x = 10
print(x)

#String
a = ""
a = ''
a = """ """
print(type(a))

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

#Demet(Tuple)
#Nasil olusturulursa oyle kalir
demet = tuple()
demet = ()
print(type(demet))
print(demet)

demet =("***")
print(demet)

demet = ("hi","admin","coding")

print(demet)
print(demet[0])
print(demet.count("hi"))
print(demet.index("coding"))

#Küme (Set)