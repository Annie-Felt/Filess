#include <stdio.h>

void decimal_a_hexadecimal(int numero) {
    if (numero < 0) {
        printf("El número debe ser positivo.\n");
        return;
    }
    
    if (numero == 0) {
        printf("0\n");
        return;
    }
    
    char digitos_hexa[] = "0123456789ABCDEF";
    char resultado[100];
    int indice = 0;
    
    while (numero > 0) {
        int residuo = numero % 16;
        resultado[indice] = digitos_hexa[residuo];
        indice++;
        numero = numero / 16;
    }
    
    printf("El número decimal es igual a ");
    
    for (int i = indice - 1; i >= 0; i--) {
        printf("%c", resultado[i]);
    }
    
    printf(" en hexadecimal.\n");
}

int main() {
    printf("Ingresa el numero: ");scanf("%"); 
    decimal_a_hexadecimal(numero_decimal);
    
    return 0;
}