#include <stdio.h>

int main() {
    printf("Ingrese un dato: ");
    
    if(scanf("%d", &(int){0}) == 1) {
        printf("El dato ingresado es de tipo entero.\n");
    }
    else if(scanf("%lf", &(double){0.0}) == 1) {
        printf("El dato ingresado es de tipo punto flotante.\n");
    }
    else if(scanf("%c", &(char){'\0'}) == 1) {
        printf("El dato ingresado es de tipo caracter.\n");
    }
    else {
        printf("El tipo de dato ingresado no es reconocido.\n");
    }
    
    return 0;
}