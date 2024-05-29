#include<stdio.h>
#include<stdlib.h>

int main (){

    int num;

    printf("Elige una opcion del 1 al 4 \n");
    scanf("%i",&num);

        switch (num){
        
        case 1:
            printf("Elegiste la opcion 1\n");
            break;

        
            break;
        case 2:
            printf("Elegiste la opcion 2\n");
            printf("--------------------------");
            break;
        case 3:
            printf("Elegiste la opcion 3\n");
            printf("--------------------------");
            break;
        case 4:
            printf("Elegiste la opcion 4\n");
            printf("--------------------------");
            break;
        default: printf("Error \n");
            printf("------------------------------");
        }





}