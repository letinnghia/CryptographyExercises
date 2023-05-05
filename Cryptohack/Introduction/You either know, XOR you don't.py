from pwn import xor

cipher = bytes.fromhex("0e0b213f26041e480b26217f27342e175d0e070a3c5b103e2526217f27342e175d0e077e263451150104")
key = xor(cipher, "crypto{".encode())

key = key.decode()[:7] + "y"
print(xor(cipher, key.encode()))