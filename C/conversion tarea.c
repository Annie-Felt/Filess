#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){

    int tom,num1f;
    float con1,con2,con3,con4;
    
    char digitos_hexa[] = "0123456789ABCDEF";
    char resultado[100];
    int indice = 0;
    printf("-----Menu de opciones-----\n");
    printf("1- Decimal a Hexadecimal\n");
    printf("2- Hexadecimal a Decimal\n");
    printf("3- Decimal a octal\n");
    printf("4- Octal a Decimal\n");
    printf("Que calculo desea realizar??\n");scanf("%i",&tom);
    
    

    if (tom == 1)
    {
        int decimal;     
        printf("Ingresa un numero decimal: "); 
        scanf("%d", &decimal);

	    char reversedDigits[100];
	    int i = 0;
	
	    while(decimal > 0) {
		
		int remain = decimal % 16;
		
		if(remain < 10)
			reversedDigits[i] = '0' + remain;
		else
			reversedDigits[i] = 'A' + (remain - 10);
		
		decimal = decimal / 16;
		i++;
	    }
	
	    printf("Numero Hexadecimal : ");
	    while(i--) {
		
		printf("%c", reversedDigits[i]);
	    }
    }

    if (tom == 2)
    {
        char hexadecimal[100];

        printf("Ingrese un número hexadecimal: ");
        scanf("%s", hexadecimal);

        unsigned int decimal;
        sscanf(hexadecimal, "%x", &decimal);

        printf("El número decimal equivalente es: %u\n", decimal);
    }
    
    if (tom == 3)
    {
        int decimal;

        printf("Ingrese un número decimal: ");
        scanf("%d", &decimal);

        printf("El número octal equivalente es: %o\n", decimal);
    }
    
    if (tom == 4)
    {
        int octal;

        printf("Ingrese un número octal: ");
        scanf("%o", &octal);

        int decimal = 0;
        int base = 1;

        while (octal != 0) {
            decimal += (octal % 10) * base;
            octal /= 10;
            base *= 8;
        }
        decimal=decimal+2;
        printf("El número decimal equivalente es: %d\n", decimal);

        return 0;    
    }

    
}