#include<stdio.h>
int main (){
	int num1;
	int num2;
	printf("Escriba cualquier numero :\n");
	scanf("%i",&num1);
	printf("Escriba cualquier otro numero :\n");
	scanf("%i",&num2);
	float suma=num1+num2;
	float resta=num1-num2;
	float multi=num1*num2;
	float div=num1/num2;
	printf("La suma es :%f \n ",suma);
	printf("La resta es :%f \n",resta);
	printf("La multiplicacion es :%f \n",multi);
	printf("La divicion es :%f \n",div);
	
}