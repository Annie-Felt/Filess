print("Ingrese elevacion")
n1 = 2
n2 = int(input())
el = pow(2,n2)
print("Resultado: ",el)

MASK = (32-n2)
print("Mascara de subred",MASK)


if(MASK == 8):
    print("255.0.0.0")
if(MASK == 9):
    print("255.128.0.0")
if(MASK == 10):
    print("255.192.0.0")
if(MASK == 11):
    print("255.224.0.0")
if(MASK == 12):
    print("255.240.0.0")
if(MASK == 13):
    print("255.248.0.0")
if(MASK == 14):
    print("255.252.0.0")
if(MASK == 15):
    print("255.254.0.0")
if(MASK == 16):
    print("255.255.0.0")
if(MASK == 17):
    print("255.255.128.0")
if(MASK == 18):
    print("255.255.192.0")
if(MASK == 19):
    print("255.255.224.0")
if(MASK == 20):
    print("255.255.240.0")
if(MASK == 21):
    print("255.255.248.0")
if(MASK == 22):
    print("255.255.252.0")
if(MASK == 23):
    print("255.255.254.0")
if(MASK == 24):
    print("255.255.255.0")
if(MASK == 25):
    print("255.255.255.128")
if(MASK == 26):
    print("255.255.255.192")
if(MASK == 27):
    print("255.255.255.224")
if(MASK == 28):
    print("255.255.255.240")
if(MASK == 29):
    print("255.255.255.248")
if(MASK == 30):
    print("255.255.255.252")




