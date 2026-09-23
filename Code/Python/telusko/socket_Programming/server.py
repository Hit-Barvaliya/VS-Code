
import socket

s = socket.socket() # hear we pass two argument type of IP-Addresss(IPv4 or IPv6) and type of connection (TCP or UDP)

print('Socket Created')

s.bind(('localhost',9999))  # we can pass only one object so we make a tuple of IPadd and portNum
# we pass ipaddress of server's IP-Address instade of 'localhost' if we have clinet and server on diffarent mechine

s.listen(3) # limit of client's request may be not sure==

while True:
    c,addr = s.accept()
    print('Connected with ',addr)

    # hear server will recieve the name which is send by the client and print name
    name = c.recv(1024).decode()
    print("Name of user is :- ",name)

    # c.send('Wellcome Telusko')
    c.send(bytes('Wellcome Telusko','utf-8'))








