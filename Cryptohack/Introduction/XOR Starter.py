from pwn import xor
s = b"label"
print(xor(s, 13).decode())