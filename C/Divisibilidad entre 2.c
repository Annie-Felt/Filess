#include<stdio.h>
int main (){
    int sum,num1,num2;
    printf("Ingrese dos numeros enteros :\n"); scanf("%i",&num1); scanf("%i",&num2);
    sum=num1+num2;
    printf("La suma de estos numeros es :  %i\n",sum);
    if (sum % 2== 0)
        printf("La suma es par");
    else 
        printf("La suma es impar");
}

