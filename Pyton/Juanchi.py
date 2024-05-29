def pedir_numeros():
    num1 = float(input("Introduce el primer número: "))
    num2 = float(input("Introduce el segundo número: "))
    return num1, num2

def elegir_operacion():
    print("Elige la operación que deseas realizar:")
    print("1. Suma")
    print("2. Resta")
    print("3. Multiplicación")
    print("4. División")
    opcion = input("Introduce el número de la operación: ")
    return opcion

def realizar_operacion(opcion, num1, num2):
    if opcion == '1':
        resultado = num1 + num2
        print(f"La suma de {num1} y {num2} es {resultado}")
    elif opcion == '2':
        resultado = num1 - num2
        print(f"La resta de {num1} y {num2} es {resultado}")
    elif opcion == '3':
        resultado = num1 * num2
        print(f"La multiplicación de {num1} y {num2} es {resultado}")
    elif opcion == '4':
        if num2 != 0:
            resultado = num1 / num2
            print(f"La división de {num1} entre {num2} es {resultado}")
        else:
            print("Error: No se puede dividir por cero.")
    else:
        print("Opción no válida. Por favor, elige una operación válida.")

def main():
    while True:
        num1, num2 = pedir_numeros()
        opcion = elegir_operacion()
        realizar_operacion(opcion, num1, num2)
        otra_operacion = input("¿Quieres realizar otra operación? (sí/no): ").strip().lower()
        if otra_operacion != 'sí':
            print("Gracias por usar el programa. ¡Adiós!")
            break

if __name__ == "__main__":
    main()
