#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){

    int dad;

    printf("LADOS CONTRAIOS DE UN DADO\n");

    printf("Si la cara superior del dado es :\n");


    do
    {

    
    
    scanf("%i",&dad);

    switch (dad)
    {
    case 1:
        printf("La cara contraria es: 6\n");
        break;
    case 2:
        printf("La cara contraria es: 5\n");
        break;
    case 3:
        printf("La cara contraria es: 4\n");
        break;
    case 4:
        printf("La cara contraria es: 3\n");
        break;
    case 5:
        printf("La cara contraria es: 2\n");
        break;
    case 6:
        printf("La cara contraria es: 1\n");
        break;
    default:
        break;
    }
    } while (dad<=6);








}