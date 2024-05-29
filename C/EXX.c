#include <stdio.h>


int main (){

    
    char letra;
  

    printf("Ingresa un caracter :\n");
    scanf("%c",&letra);


    if (letra >= 65 && letra<=90){

        printf("Letra mayuscula \n");
    }
    if (letra >= 97 && letra<=122){
    
        printf("Letra minuscula");
    }
    
    if (letra >=49 && letra <=57 ){
        printf("Numero");
    }
    if (letra >= 59 && letra <=64){
        printf("Caracter especial");
    }

    






}