#Local Variable
#GLobal Variable


a=10 #GLobal Variable
def fonksiyon():
    a=5#Local Variable
    print(a)
    
fonksiyon()
print(a)

#Fonksiyon global degiskeni kullanabilirken program fonksiyondaki degiskenleri kullanamaz

#Global Değişkeni Fonksiyonun İçinde Degiştirme

b=9
def fonksiyon():
    global b
    b=1
    print(b)
    
fonksiyon()
print(b)

#do more example
#nihil.ceng.metu.edu.tr