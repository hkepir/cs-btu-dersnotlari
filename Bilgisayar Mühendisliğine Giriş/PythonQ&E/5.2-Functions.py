#Geometrik Sekil Hesaplama-Ornek Fonksiyon
"""
def geometri(sekil):
    if len(sekil)==3:
        a = sekil[0]
        b = sekil[1]
        c = sekil[2]
        
        if(a+b)>c and (a+c)>b and (b+c)>a:
                if(a==b) and (a==c) and (b==c):
                    print("Eskenar Ucgen")
                elif(a==b) and (a==c):
                    print("Ikiz Kenar Ucgen")
                else:
                    print("Cesitkenar Ucgen")
        else:
            print("Ucgen Belirtmiyor")
            
            
    if len(sekil)==4:
            a = sekil[0]
            b = sekil[1]
            c = sekil[2]
            d = sekil[3]
            
            if(a==b) and (a==c) and (a==d):
                    print("Kare")
            elif(a==b) and (c==d):
                    print("Dikdortgen")
            else:
                    print("Cesitkenar Dortgen")
                
    else:
         print("Herhangi bir sekil belirtmez")

while(True):
    eleman_sayisi = int(input("Eleman Sayisi Giriniz (3 veya 4):"))
    if(eleman_sayisi == 3):
       a = int(input("a:"))         
       b = int(input("b:"))
       c = int(input("c:"))
       geometri([a,b,c])
       
    elif (eleman_sayisi == 4):
       a = int(input("a:"))         
       b = int(input("b:"))
       c = int(input("c:"))
       d = int(input("d:"))
       geometri([a,b,c,d])
       
    else:
        print("Tekrar Giris Yapiniz")
                
 """               
                
def geometri(sekil):
    if len(sekil) == 3:
        a = sekil[0]
        b = sekil[1]
        c = sekil[2]
        
        if (a + b > c) and (a + c > b) and (b + c > a):
            if (a == b) and (a == c):
                print("Eskenar Ucgen")
            elif (a == b) or (a == c) or (b == c):
                print("Ikiz Kenar Ucgen")
            else:
                print("Cesitkenar Ucgen")
        else:
            print("Ucgen Belirtmiyor")
            
    elif len(sekil) == 4:
        a = sekil[0]
        b = sekil[1]
        c = sekil[2]
        d = sekil[3]
        
        if (a == b) and (a == c) and (a == d):
            print("Kare")
        elif (a == b) and (c == d):
            print("Dikdortgen")
        else:
            print("Cesitkenar Dortgen")
    else:
        print("Herhangi bir sekil belirtmez")

while True:
    eleman_sayisi = int(input("Eleman Sayisi Giriniz: "))
    if eleman_sayisi == 3:
        a = int(input("a: "))         
        b = int(input("b: "))
        c = int(input("c: "))
        geometri([a, b, c])
    elif eleman_sayisi == 4:
        a = int(input("a: "))         
        b = int(input("b: "))
        c = int(input("c: "))
        d = int(input("d: "))
        geometri([a, b, c, d])
    else:
        print("Tekrar Giris Yapiniz")
              
                
                
                
                
                
                
                
                
                
                
                