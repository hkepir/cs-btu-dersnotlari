def yaz():
    print("Ben yaz fonksiyonuyum")
    metin = input("Yazmak istediginiz metni giriniz:")
    print(metin)
    print("-----")

def kiyas(x, y):
    print("Ben kiyas fonksiyonuyum")
    if x < y:
        print("%d küçüktür %d" % (x, y))
    elif x > y:
        print("%d büyüktür %d" % (x, y))
    else:
        print("%d eşittir %d" % (x, y))
    print("-----")