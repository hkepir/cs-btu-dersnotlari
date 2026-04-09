import cv2
import numpy as np


img = cv2.imread('nergis.jpg')

if img is None:
    print("Hata: cicek.jpg bulunamadı!")
else:
    sonuc_img = img.copy()
    
    analiz_listesi = [
        {"ad": "Mavi",    "indis": 0, "cizim_rengi": (255, 0, 0)},
        {"ad": "Yesil",   "indis": 1, "cizim_rengi": (0, 255, 0)},
        {"ad": "Kirmizi", "indis": 2, "cizim_rengi": (0, 0, 255)}
    ]

    print(f"--- Renk Analiz Raporu ---")

    for renk in analiz_listesi:
        kanal = img[:, :, renk["indis"]]
        
        min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(kanal)
        ortalama = np.mean(kanal)
        
        print(f"{renk['ad']} Katmanı:")
        print(f"  Max Değer: {max_val} | Koordinat: {max_loc}")
        print(f"  Ortalama : {ortalama:.2f}")

        cv2.circle(sonuc_img, max_loc, 20, renk["cizim_rengi"], 3)
        cv2.putText(sonuc_img, renk["ad"], (max_loc[0] + 25, max_loc[1]), 
                    cv2.FONT_HERSHEY_SIMPLEX, 0.8, renk["cizim_rengi"], 2)

    cv2.imshow('3 Renk Analiz Sonucu', sonuc_img)
    
    cv2.waitKey(0)
    cv2.destroyAllWindows()