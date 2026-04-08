#  _iter_
#  _next_
"""
Iterator, bir veri yapisindaki elemanlari tek tek dolasmayi 
saglayan bir nesnedir. Bir koleksiyon icindeki elemanlari 
sirayla almani saglar.

"""

liste = ['a','b','c','d','e','f']
iterator = iter(liste)
print(next(iterator))
print(next(iterator))
print(next(iterator))
print(next(iterator))
print(next(iterator))
print(next(iterator))
# print(next(iterator))
#Error: StopIteration

print("------")

liste2 = [123,124,125,126]
for i in liste2:
    print(i)

print("------")

iter_nesnesi = iter(liste2)

while True:
    try:
        i = next(iter_nesnesi)
        print(i)
    except StopIteration:
        break

print("------")

class rafdakiKitaplar():
    def __init__(self,kitaplar,raf):
        self.kitaplar = kitaplar
        self.raf = raf
        self.index = -1 # ilk next cagrisinda 0 olacak
    def __iter__(self):
        return self
    def __next__(self):
        self.index += 1
        if(self.index<len(self.kitaplar)):
            return self.kitaplar[self.index]
        else:
            self.index = -1
            raise StopIteration # hata firlatmak icin

kitaplar1 = rafdakiKitaplar(["Simyaci","Calikusu","Yaprak Dokumu","Lara","Bosluk"],"A Rafi")

for i in kitaplar1:
    print(i)

print("-----")

#Generator
#Python'da degerleri tek tek ureten hepsini ayni anda bellege 
#almayan ozel bir iterator turudur.

liste3 = [1,2,3,4,5,6,7,8,9,10,11,12,13]
#tum elemanlar bellekte

def sayac(n):
    i=1
    while i<=n:
        yield i
        i += 1

# otomatik olarak arka planda
# g = sayac(3) 
# generator olusturulur.
"""
while True:
    try:
        x = next(g) #her seferinde calistirilir
        print(x)
    except StopIteration:
        break
"""

for x in sayac(3):
    print(x)

print("------")