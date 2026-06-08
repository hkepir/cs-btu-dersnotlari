"""
hamming_engine Açıklaması

Dosya içerisinde bulunan HammingEngine sınıfı seçilen veri uzunluğuna (8, 16 veya 32 bit) göre
 gerekli parite bitlerinin sayısını hesaplar. Ardından veri bitlerini Hamming kodunun 
 kurallarına uygun şekilde yerleştirir ve XOR işlemleri ile parite bitlerini üretir. 
 Böylece bellekte saklanacak Hamming kodu oluşturulur. Ayrıca bellekten okunan bozuk veri üzerinde 
 yeniden parite kontrolleri yapılarak sendrom değeri hesaplanır. Hesaplanan sendrom sıfır ise 
 hata olmadığı anlaşılır; sıfırdan farklı ise sendrom değeri doğrudan hatalı bitin pozisyonunu gösterir 
 ve ilgili bit terslenerek veri düzeltilir. Bu nedenle bu dosya sistemin çekirdeği olarak düşünülebilir.
 
 Hilal Kepir 23360859088
 """

class HammingEngine:
    def __init__(self, data_bits_length):
        if data_bits_length not in [8, 16, 32]:
            raise ValueError("Desteklenen bit uzunlukları: 8, 16 veya 32")
        self.M = data_bits_length
        self.K = self._calculate_k()
        self.total_length = self.M + self.K

    def _calculate_k(self):
        k = 1
        while (2 ** k) < (self.M + k + 1):
            k += 1
        return k

    def generate_hamming_code(self, data_str):
        # Kullanıcının girdiği veriyi sağdan sola yerleştirmek için listeye çeviriyoruz
        data = list(data_str[::-1])
        code = ['0'] * self.total_length
        
        # 1. Adım: Veri bitlerini parite pozisyonlarını (1,2,4,8...) boş bırakarak sağdan sola diz
        data_idx = 0
        for i in range(1, self.total_length + 1):
            if (i & (i - 1)) != 0:  # 2'nin kuvveti değilse veridir
                code[i - 1] = data[data_idx]
                data_idx += 1
                
        # 2. Adım: Parite bitlerini hesapla
        for i in range(self.K):
            parity_pos = 2 ** i
            parity_val = 0
            for j in range(1, self.total_length + 1):
                # j pozisyonundaki bit, bu parite bitinin kapsama alanında mı?
                if (j & parity_pos) and (j != parity_pos):
                    parity_val ^= int(code[j - 1])
            code[parity_pos - 1] = str(parity_val)
            
        # Sonucu arayüze soldan sağa (D12 en solda, P1 en sağda) string olarak döndür
        return "".join(code[::-1])

    def detect_and_correct(self, received_code_str):
        # Gelen string'i sağdan sola indekslemek için listeye çevirip ters çeviriyoruz
        code = list(received_code_str[::-1])
        syndrome = 0
        
        # Sendrom kelimesini hesapla
        for i in range(self.K):
            parity_pos = 2 ** i
            parity_val = 0
            for j in range(1, self.total_length + 1):
                if j & parity_pos:
                    parity_val ^= int(code[j - 1])
            if parity_val != 0:
                syndrome += parity_pos
                
        if syndrome == 0:
            return received_code_str, 0, "Hata Yok."
        else:
            if syndrome <= self.total_length:
                # Hatalı biti tersle
                code[syndrome - 1] = '1' if code[syndrome - 1] == '0' else '0'
                corrected_code = "".join(code[::-1])
                return corrected_code, syndrome, "Hatalı bit tespit edildi ve düzeltildi!"
            else:
                return received_code_str, -1, "Çoklu Hata (Düzeltilemez!)"