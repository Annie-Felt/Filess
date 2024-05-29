#include<stdio.h>
#include<stdlib.h>

int main (){

    int num;
    
    
    do
    {
    printf("\n");
    printf("Elige una opcion del 1 al 4 \n");
    scanf("%i",&num);
    system("cls");
        switch (num){
        
        case 1:
            printf("Elegiste la opcion 1\n");
            printf("--------------------------");
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
            printf("------------------------------\n");
        
        }
    } while (num != 4);
    
    
}