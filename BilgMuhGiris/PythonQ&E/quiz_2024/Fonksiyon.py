def BasitBolme(sayi):
    sayi = int(sayi)  

  
    if sayi % 3 == 0 and sayi % 5 == 0:
        sonuc = "@" + str(sayi) + "@"
    
    elif sayi % 3 == 0:
        sonuc = "?" + str(sayi) + "?"
    
    elif sayi % 5 == 0:
        sonuc = "!" + str(sayi) + "!"
    
    else:
        sonuc = "#" + str(sayi) + "#"

    print(sonuc)


sayi = input("Lutfen Bir Sayi Giriniz: ")
BasitBolme(sayi)


"""
def BasitBolme(sayi):
    sayi = int(sayi) 
    if sayi % 3 == 0 and sayi % 5 == 0:  # Hem 3'e hem 5'e bölünüyorsa
        return f"@{sayi}@"
    elif sayi % 3 == 0:  
        return f"?{sayi}?"
    elif sayi % 5 == 0:  
        return f"!{sayi}!"
    else:  
        return f"#{sayi}#"

sayi = input("Lutfen Bir Sayi Giriniz: ")
sonuc = BasitBolme(sayi)
print(sonuc)
"""
