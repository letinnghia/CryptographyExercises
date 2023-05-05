from base64 import b64encode
code = "72bca9b68fc16ac7beeb8f849dca1d8a783e8acf9679bf9269f7bf"
bytesString = bytes.fromhex(code)
b64code = b64encode(bytesString)
print(b64code)