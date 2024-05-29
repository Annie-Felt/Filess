import random

# Imprimir 100 números aleatorios del 1 al 50
numeros = []
for i in range(100):
    numero = random.randint(1, 50)
    numeros.append(numero)
    print(numero)

# Elegir 10 números al azar y sumarlos
suma = 0
for i in range(10):
    indice = random.randint(0, 99)
    suma += numeros[indice]

# Imprimir la suma de los 10 números elegidos al azar
print("La suma de los 10 números elegidos al azar es:", suma)