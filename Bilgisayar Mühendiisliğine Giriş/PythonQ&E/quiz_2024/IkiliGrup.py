with open("once.txt", "r") as once_file:
    # Dosyanın içeriğini oku ve boşlukları temizle
    kaydet = once_file.read().strip()

# Boş bir liste oluştur
ikiliGrup = []
for i in range(0, len(kaydet), 2):
    # Eğer son grup tek karakterse onu da ekle
    ikiliGrup.append(kaydet[i:i+2])

# Grupları sonra.txt dosyasına yaz
with open("sonra.txt", "w") as sonra_file:
    sonra_file.write(" ".join(ikiliGrup))
    
    
"""
with open("once.txt", "r") as once_file:
    # Dosyanın içeriğini oku ve boşlukları temizle
    kaydet = once_file.read().strip()

# Boş bir liste yerine direkt dosyaya yazmaya hazırlık
with open("sonra.txt", "w") as sonra_file:
    for i in range(0, len(kaydet), 2):
        # 2 karakterlik bir grup al
        grup = kaydet[i:i+2]
        
        # Son grupta boşluk eklememek için kontrol yap
        if i + 2 < len(kaydet):
            sonra_file.write(grup + " ")  # Boşluk ekleyerek yaz
        else:
            sonra_file.write(grup)  # Son grupta boşluk ekleme

"""