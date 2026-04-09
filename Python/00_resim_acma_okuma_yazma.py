import cv2

resim_adi = r"C:\Users\hkepi\Desktop\calisma\nergis.jpg"
resim=cv2.imread(resim_adi,0)

cv2.imwrite(r"C:\Users\hkepi\Desktop\calisma\nergis_siyah_beyaz.jpg",resim)
cv2.imshow("Deneme",resim)
cv2.waitKey(0)
cv2.destroyAllWindows()