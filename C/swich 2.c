#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){

    int sll;
    int sueldo = 3000;
    int RX,men;
    int neto;
    int ing,mas;
    
    printf("------------------------------------\n");
    printf("Elija una opcion del 1 al 4\n");
    printf("1- Consultar saldo\n");
    printf("2- Retirar\n");
    printf("3- Depositar\n");
    printf("4- Salir\n");
    printf("------------------------------------\n");
    do
    {

    
    scanf("%i",&RX);

        switch (RX){
        case 1:
            printf("Su saldo es : %i\n",sueldo);
            break;
        case 2:
            printf("Cuanto desea retirar?? \n");
            scanf("%i",&men);
            neto=(sueldo-men);
            printf("El restante es :%i \n",neto);
            break;
        case 3:
            printf("Cuanto desea depositar ??\n");
            scanf("%i",&ing);
            mas=(sueldo+ing);
            printf("El saldo es de :%i",mas);
            break;
        case 4:
            printf("Saliendo...");
            break;
        
        default:
            break;
        }
        } while (RX<=3);






}