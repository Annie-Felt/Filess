#include <stdio.h>

main() {


    char caracter = 'a';

    while(caracter<='z') {
        printf("%c \n",caracter);



        if(caracter == 'n') {
            printf("ñ \n");
        }

        caracter++;
    }

}