#include <stdio.h>
#include <math.h>

int main() {
    char hexadecimal[100];
    int decimal = 0, i, length;

    printf("Ingrese un número hexadecimal: ");
    scanf("%s", hexadecimal);

    // Calcula la longitud del número hexadecimal
    length = strlen(hexadecimal);

    // Convierte el número hexadecimal a decimal
    for (i = 0; i < length; i++) {
        // Obtiene el dígito actual
        char digit = hexadecimal[i];

        // Verifica si el dígito es una letra de la A a la F
        if (digit >= 'A' && digit <= 'F') {
            decimal += (digit - 'A' + 10) * pow(16, length - i - 1);
        }
        // Si el dígito es un número del 0 al 9
        else if (digit >= '0' && digit <= '9') {
            decimal += (digit - '0') * pow(16, length - i - 1);
        }
        // Si el dígito no es válido
        else {
            printf("Número hexadecimal no válido.\n");
            return 0;
        }
    }

    printf("El número decimal equivalente es: %d\n", decimal);

    return 0;
}