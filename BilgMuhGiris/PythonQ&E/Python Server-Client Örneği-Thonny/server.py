import socket                                         
import time

# create a socket object
serversocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM) 
# get local machine name
host = socket.gethostname()                           
port = 9999                                           
# bind to the port
serversocket.bind((host, port))                                  
# queue up to 5 requests
serversocket.listen(5)                                           
while True:
    # establish a connection
    clientsocket,addr = serversocket.accept()      
    print("Bağlanan IP Adresi ve portu %s" % str(addr))
    message = "Sunucudan Merhaba \n"
    clientsocket.send(message.encode('ascii'))
    clientsocket.close()