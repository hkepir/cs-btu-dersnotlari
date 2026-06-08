"""
main.py Açıklaması

Bu dosya kullanıcı arayüzünü içermektedir. Arayüz geliştirilirken Python'un Tkinter tabanlı 
 CustomTkinter kütüphanesi kullanılmıştır.

Program çalıştırıldığında ilk olarak bu dosya açılır ve kullanıcıya grafiksel arayüz gösterilir.
 main.py deki hesapla butonu gerekli hesaplamalar için hamming_engine.py içerisindeki fonksiyonları çağırır.

Programın çalıştırılabilmesi için bilgisayarda Python 3 kurulu olmalıdır. Ayrıca arayüz için 
 kullanılan CustomTkinter kütüphanesinin yüklenmesi gerekir. 
 
 Hilal Kepir 23360859088

"""

import customtkinter as ctk
from tkinter import messagebox
from hamming_engine import HammingEngine

ctk.set_appearance_mode("System")
ctk.set_default_color_theme("blue")

class HammingApp(ctk.CTk):
    def __init__(self):
        super().__init__()

        self.title("BLM230 Bilgisayar Mimarisi - Hamming Code Simulator")
        self.geometry("850x700")
        self.resizable(True, True)
        self.minsize(750, 600)

        self.engine = None
        self.generated_code = ""
        self.bit_labels = []

        # --- ARAYÜZ BİLEŞENLERİ ---
        self.title_label = ctk.CTkLabel(self, text="Hamming Error-Correcting Code Simulator", font=ctk.CTkFont(size=22, weight="bold"))
        self.title_label.pack(pady=15, fill="x")

        # 1. Çerçeve: Bit Uzunluğu Seçimi
        self.radio_frame = ctk.CTkFrame(self)
        self.radio_frame.pack(pady=10, fill="x", padx=40)
        self.radio_frame.grid_columnconfigure((1, 2, 3), weight=1)
        
        self.radio_label = ctk.CTkLabel(self.radio_frame, text="Veri Bit Uzunluğu (M):", font=ctk.CTkFont(size=14, weight="bold"))
        self.radio_label.grid(row=0, column=0, padx=20, pady=10, sticky="w")
        
        self.bit_var = ctk.IntVar(value=8)
        self.r8 = ctk.CTkRadioButton(self.radio_frame, text="8 Bit", variable=self.bit_var, value=8, command=self.on_bit_change)
        self.r16 = ctk.CTkRadioButton(self.radio_frame, text="16 Bit", variable=self.bit_var, value=16, command=self.on_bit_change)
        self.r32 = ctk.CTkRadioButton(self.radio_frame, text="32 Bit", variable=self.bit_var, value=32, command=self.on_bit_change)
        
        self.r8.grid(row=0, column=1, padx=20, pady=10, sticky="nsew")
        self.r16.grid(row=0, column=2, padx=20, pady=10, sticky="nsew")
        self.r32.grid(row=0, column=3, padx=20, pady=10, sticky="nsew")

        # 2. Çerçeve: Veri Girişi
        self.input_frame = ctk.CTkFrame(self)
        self.input_frame.pack(pady=10, fill="x", padx=40)
        self.input_frame.grid_columnconfigure(1, weight=2)
        self.input_frame.grid_columnconfigure(2, weight=1)

        self.entry_label = ctk.CTkLabel(self.input_frame, text="Veri Girişi (Binary):", font=ctk.CTkFont(size=14, weight="bold"))
        self.entry_label.grid(row=0, column=0, padx=20, pady=15, sticky="w")

        self.data_entry = ctk.CTkEntry(self.input_frame, placeholder_text="Örn: 10110110")
        self.data_entry.grid(row=0, column=1, padx=10, pady=15, sticky="ew")

        self.gen_btn = ctk.CTkButton(self.input_frame, text="Hamming Kodu Oluştur", command=self.generate_code)
        self.gen_btn.grid(row=0, column=2, padx=20, pady=15, sticky="ew")

        # 3. Çerçeve: Dinamik Bit Izgarası
        self.grid_title_label = ctk.CTkLabel(self, text="Bellekte Saklanan Bit Dağılımı (Sağdan Sola)", font=ctk.CTkFont(size=14, weight="bold"))
        self.grid_title_label.pack(pady=(15, 5), fill="x")
        
        self.visualizer_frame = ctk.CTkScrollableFrame(self, orientation="horizontal", height=85)
        self.visualizer_frame.pack(pady=5, fill="x", padx=40)

        # 4. Çerçeve: Hata Enjeksiyon Paneli
        self.error_frame = ctk.CTkFrame(self)
        self.error_frame.pack(pady=15, fill="x", padx=40)
        self.error_frame.grid_columnconfigure(1, weight=2)
        self.error_frame.grid_columnconfigure(2, weight=1)

        self.err_label = ctk.CTkLabel(self.error_frame, text="Yapay Hata Oluştur (Bit Pozisyonu):", font=ctk.CTkFont(size=14, weight="bold"))
        self.err_label.grid(row=0, column=0, padx=20, pady=15, sticky="w")

        self.error_bit_combo = ctk.CTkComboBox(self.error_frame, values=["Hata Yok"])
        self.error_bit_combo.grid(row=0, column=1, padx=10, pady=15, sticky="ew")

        self.sim_btn = ctk.CTkButton(self.error_frame, text="Hata Enjekte Et ve Düzelt", fg_color="#D32F2F", hover_color="#B71C1C", command=self.simulate_error)
        self.sim_btn.grid(row=0, column=2, padx=20, pady=15, sticky="ew")

        # 5. Çerçeve: Sonuç Ekranı
        self.result_frame = ctk.CTkFrame(self, fg_color="transparent")
        self.result_frame.pack(pady=10, fill="both", expand=True, padx=40)

        self.res_title = ctk.CTkLabel(self.result_frame, text="SİMÜLASYON ANALİZ RAPORU", font=ctk.CTkFont(size=13, weight="bold"))
        self.res_title.pack(anchor="w", padx=10)

        self.result_textbox = ctk.CTkTextbox(self.result_frame, font=ctk.CTkFont(size=13))
        self.result_textbox.pack(fill="both", expand=True, padx=5, pady=5)
        
        self.on_bit_change()

    def on_bit_change(self):
        m_val = self.bit_var.get()
        self.engine = HammingEngine(m_val)
        self.data_entry.delete(0, "end")
        self.clear_visualizer()
        
        combo_values = ["Hata Yok"] + [str(i) for i in range(1, self.engine.total_length + 1)]
        self.error_bit_combo.configure(values=combo_values)
        self.error_bit_combo.set("Hata Yok")
        self.log_message(f"Sistem Modu Değiştirildi: {m_val} Bit Veri -> {self.engine.K} Parite biti kullanılacak. Toplam Bellek: {self.engine.total_length} bit.")

    def clear_visualizer(self):
        for widget in self.visualizer_frame.winfo_children():
            widget.destroy()
        self.bit_labels = []

    def log_message(self, message):
        self.result_textbox.insert("end", message + "\n")
        self.result_textbox.see("end")

    def generate_code(self):
        user_input = self.data_entry.get().strip()
        if not user_input or len(user_input) != self.engine.M or not all(b in '01' for b in user_input):
            messagebox.showerror("Hata", f"Lütfen tam olarak {self.engine.M} bitlik binary (0-1) veri girin!")
            return

        self.generated_code = self.engine.generate_hamming_code(user_input)
        self.clear_visualizer()
        
        # Kutuları ekrana basıyoruz (side="right" ile P1 en sağa, D12 en sola yerleşir)
        for idx in range(self.engine.total_length):
            bit_pos = idx + 1
            bit_val = self.generated_code[-bit_pos]
            
            is_parity = (bit_pos & (bit_pos - 1)) == 0
            box_color = "#2E7D32" if is_parity else "#1565C0"
            text_prefix = f"P{bit_pos}" if is_parity else f"D{bit_pos}"
            
            cell = ctk.CTkFrame(self.visualizer_frame, width=50, height=60, fg_color=box_color)
            cell.pack(side="right", padx=3, pady=5)
            cell.pack_propagate(False)
            
            lbl_type = ctk.CTkLabel(cell, text=text_prefix, font=ctk.CTkFont(size=10, weight="bold"), text_color="white")
            lbl_type.pack(pady=(2,0))
            
            lbl_val = ctk.CTkLabel(cell, text=bit_val, font=ctk.CTkFont(size=18, weight="bold"), text_color="white")
            lbl_val.pack(pady=2)
            
            self.bit_labels.append((bit_pos, cell, lbl_val))

       
        self.log_message(f"\n[İŞLEM]: {user_input} verisi için Hamming Kodu oluşturuldu.")
        self.log_message(f"-> Belleğe Yazılan Ham Kod: {self.generated_code}")

    def simulate_error(self):
        if not self.generated_code:
            messagebox.showwarning("Uyarı", "Önce Hamming Kodu üretmeli ve belleğe yazmalısınız!")
            return

        selected_err = self.error_bit_combo.get()
        
        # Önce tüm kutuları orijinal haline döndür
        for bit_pos, cell, lbl_val in self.bit_labels:
            is_parity = (bit_pos & (bit_pos - 1)) == 0
            cell.configure(fg_color="#2E7D32" if is_parity else "#1565C0")
            lbl_val.configure(text=self.generated_code[-bit_pos])

        if selected_err == "Hata Yok":
            corrupted_code = self.generated_code
            self.log_message("\n[YAPAY HATA]: Hata enjekte edilmedi. Temiz veri okunuyor.")
        else:
            hata_pos = int(selected_err)
            kod_list = list(self.generated_code)
            # Sağdan hata_pos konumundaki biti tersle
            kod_list[-hata_pos] = '1' if kod_list[-hata_pos] == '0' else '0'
            corrupted_code = "".join(kod_list)
            
            self.log_message(f"\n[YAPAY HATA]: Sağdan {hata_pos}. bit kasıtlı olarak terslendi!")
            self.log_message(f"-> Bellekten Okunan Bozuk Kod: {corrupted_code}")
            
            for bit_pos, cell, lbl_val in self.bit_labels:
                if bit_pos == hata_pos:
                    cell.configure(fg_color="#C62828")
                    lbl_val.configure(text=corrupted_code[-bit_pos])

        corrected_code, bulunan_hata, mesaj = self.engine.detect_and_correct(corrupted_code)
        
        self.log_message(f"[SİSTEM ANALİZİ]: {mesaj}")
        if bulunan_hata > 0:
            self.log_message(f"-> Hesaplanan Sendrom Değeri (Hata Pozisyonu): {bulunan_hata}")
            self.log_message(f"-> Otomatik Düzeltilen Kod: {corrected_code}")
            
            for bit_pos, cell, lbl_val in self.bit_labels:
                if bit_pos == bulunan_hata:
                    cell.configure(fg_color="#F57F17")
                    lbl_val.configure(text=corrected_code[-bit_pos])
        else:
            self.log_message("-> Veride herhangi bir bozulma yok, doğruluğu teyit edildi.")


if __name__ == "__main__":
    app = HammingApp()
    app.mainloop()