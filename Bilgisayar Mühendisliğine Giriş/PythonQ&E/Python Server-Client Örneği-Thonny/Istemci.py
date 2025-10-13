import socket

# İstemci soketi oluşturulur
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Sunucunun adresi alınır
#host = socket.gethostname()
host = "127.0.0.1"
port = 10040

# Bağlantı kurulur
client_socket.connect((host, port))

# Mesaj alınır
data = client_socket.recv(1024)#max alinabilecek veri 1024 bayt'lik tampon
print("Sunucudan gelen mesaj:", data.decode('ascii'))


# Soket kapatılır
client_socket.close()