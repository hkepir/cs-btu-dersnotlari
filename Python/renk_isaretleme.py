import cv2
import numpy as np

# 1. Resmi yükle
img = cv2.imread('nergis.jpg')

if img is None:
    print("Hata: nergis.jpg bulunamadı!")
else:
    # 2. Kanalları ayır (OpenCV BGR sırasıyla okur)
    mavi_kanali = img[:, :, 0]
    kirmizi_kanali = img[:, :, 2]

    # 3. En yüksek (parlak) değerlerin koordinatlarını bul
    # minMaxLoc fonksiyonu bize min/max değerleri ve yerlerini (x, y) verir
    (minValB, maxValB, minLocB, maxLocB) = cv2.minMaxLoc(mavi_kanali)
    (minValR, maxValR, minLocR, maxLocR) = cv2.minMaxLoc(kirmizi_kanali)

    # 4. Orijinal resmin üzerine işaret koy (Kopya üzerinde)
    isaretli_resim = img.copy()

    # En Mavi Noktayı Mavi Daire ile işaretle (maxLocB bir (x, y) koordinatıdır)
    cv2.circle(isaretli_resim, maxLocB, 15, (255, 0, 0), 3)
    cv2.putText(isaretli_resim, "En Mavi", (maxLocB[0]+20, maxLocB[1]), 
                cv2.FONT_HERSHEY_SIMPLEX, 0.7, (255, 0, 0), 2)

    # En Kırmızı Noktayı Kırmızı Daire ile işaretle
    cv2.circle(isaretli_resim, maxLocR, 15, (0, 0, 255), 3)
    cv2.putText(isaretli_resim, "En Kirmizi", (maxLocR[0]+20, maxLocR[1]), 
                cv2.FONT_HERSHEY_SIMPLEX, 0.7, (0, 0, 255), 2)

    # 5. Kanalları ayrı ayrı "Isı Haritası" gibi göster
    # (Beyaz bölgeler o rengin en yoğun olduğu yerlerdir)
    cv2.imshow('En Yogun Noktalar', isaretli_resim)
    cv2.imshow('Sadece Kirmizi Yogunlugu', kirmizi_kanali)
    cv2.imshow('Sadece Mavi Yogunlugu', mavi_kanali)

    print(f"En Kırmızı Nokta Koordinatı (X,Y): {maxLocR} - Değer: {maxValR}")
    print(f"En Mavi Nokta Koordinatı (X,Y): {maxLocB} - Değer: {maxValB}")

    cv2.waitKey(0)
    cv2.destroyAllWindows()