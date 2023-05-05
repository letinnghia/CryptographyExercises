import base64
from Crypto.Util.asn1 import DerSequence

with open(r"C:\Users\buivu\Downloads\privacy_enhanced_mail_1f696c053d76a78c2c531bb013a92d4a.pem", "r") as f:

  a = f.read()
  a = a.lstrip('-----BEGIN RSA PRIVATE KEY-----\n')
  a = a.rstrip('\n-----END RSA PRIVATE KEY-----\n')
  a = base64.b64decode(a)
  a = DerSequence().decode(a)[:]
  print(a[3])