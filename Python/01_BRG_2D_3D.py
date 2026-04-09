import cv2

# --- 1. RESİM OKUMA VE HAZIRLIK ---
# r"" kullanmamızın sebebi Windows dosya yollarındaki ters eğik çizgilerin (\) hata vermesini önlemektir.
resim_adi = r"C:\Users\hkepi\Desktop\calisma\nergis.jpg"

# Resmi orijinal renkleriyle (BGR - 3 kanal) okuyoruz.
resim = cv2.imread(resim_adi)

# Resmi siyah-beyaz (Grayscale - 1 kanal) olarak tekrar okuyoruz.
# Sondaki '0' parametresi resmin gri tonlamalı okunmasını sağlar.
img2 = cv2.imread(resim_adi, 0)

# --- 2. DOSYA KAYDETME ---
# 'resim' değişkeni renkli olduğu için onu değil, siyah-beyaz olan 'img2' değişkenini kaydediyoruz.
cv2.imwrite(r"C:\Users\hkepi\Desktop\calisma\nergis_siyah_beyaz.jpg", img2)

# --- 3. TEKNİK BİLGİLERİ YAZDIRMA (RENKLİ) ---
print("--- RENKLİ RESİM ÖZELLİKLERİ ---")
print("Veri Tipi (img.type)   : ", type(resim))   # numpy.ndarray (Matematiksel dizi)
print("Data Tipi (img.dtype)  : ", resim.dtype)  # uint8 (0-255 arası tam sayılar)
print("Boyutlar (img.shape)   : ", resim.shape)  # (Yükseklik, Genişlik, Kanal Sayısı: 3)
print("Toplam Piksel (size)   : ", resim.size)   # Yükseklik * Genişlik * 3
print("-" * 30)

# --- 4. TEKNİK BİLGİLERİ YAZDIRMA (SİYAH-BEYAZ) ---
print("--- SİYAH-BEYAZ RESİM ÖZELLİKLERİ ---")
print("Boyutlar (img2.shape)  : ", img2.shape)  # (Yükseklik, Genişlik) -> Kanal bilgisi yoktur
print("Toplam Piksel (size)   : ", img2.size)   # Sadece Yükseklik * Genişlik (3 kat daha küçük)
print("-" * 30)

# --- 5. PİKSEL DEĞERİNE ERİŞİM (HATA DÜZELTME) ---
# ÖNEMLİ: Renkli resim 3 boyutlu olduğu için sadece (y, x) koordinatı yetmez.
# Hata almamak için ya siyah-beyaz resimden bakmalıyız ya da renkli resimde kanal seçmelisiniz.

# Yöntem A: Siyah-beyaz resimden 50. satır 50. sütundaki parlaklık değerini al
print("Siyah-beyaz (50,50) parlaklık değeri : ", img2.item(50, 50))

# Yöntem B: Renkli resimden 50. satır 50. sütundaki MAVİ (0) kanalını al
# (0: Mavi, 1: Yeşil, 2: Kırmızı)
print("Renkli (50,50) noktasındaki MAVİ değeri: ", resim.item(50, 50, 0))

# --- 6. GÖRSELLEŞTİRME ---
cv2.imshow("Renkli Orijinal", resim)         # Renkli halini göster
cv2.imshow("Siyah Beyaz Kaydedilen", img2)    # Siyah-beyaz halini göster

# Klavyeden bir tuşa basılana kadar bekle
cv2.waitKey(0)

# Program kapandığında tüm pencereleri temizle
cv2.destroyAllWindows()
