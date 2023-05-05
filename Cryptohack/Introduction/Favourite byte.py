from pwn import xor

cipher = "73626960647f6b206821204f21254f7d694f7624662065622127234f726927756d"
code = bytes.fromhex(cipher)

for c in range(256):
    tmp = xor(code, c).decode("utf-8")
    if("crypto" in tmp):
        print(tmp)
        break