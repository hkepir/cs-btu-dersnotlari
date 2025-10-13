toplam = 0
sayi = 1 

while sayi < 200:
    sonuc = 3 * sayi + (-1) ** sayi
    toplam = toplam + sonuc
    sayi = sayi + 1  # Sayaç bir artırılır

kalan = toplam % 5
print("Dizinin tüm elemanlarının toplamının 5 ile bölümünden kalan:", kalan)