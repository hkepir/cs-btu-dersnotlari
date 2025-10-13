import socket

# Sunucu soketi oluşturulur
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Yerel adres ve port belirlenir
host = socket.gethostname()  # localhost için kullanılabilir
port = 10040

# Soket belirtilen adres ve port'a bağlanır
server_socket.bind((host, port))

# Sunucu bağlantı isteklerini dinlemeye başlar
server_socket.listen(5)
print("Sunucu dinleniyor...")

# Bağlantı kabul edilir
client_socket, address = server_socket.accept()
print(f"Bağlantı kuruldu: {address}")

# Mesaj gönderilir
message = "Merhaba, istemci!"
client_socket.send(message.encode('ascii'))

# Soketler kapatılır
client_socket.close()
server_socket.close()