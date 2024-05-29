#include<stdio.h>
int main(){

	int n,nn,nt,n1,n2,op,ng;
	float sum,res,mul,div,rr;
	int volver = 0;
	printf("-------- MENU PRINCIPAL--------\n");
	printf("-------------------------------\n");
	printf("    1.-OPERACIONES BASICAS\n");
	printf("-------------------------------\n");
	printf("  2.-TABLAS DE MULTIPLICACION\n");	
	printf("-------------------------------\n");
	printf("           3.-Menu \n");
	printf("-------------------------------\n");
	printf("\n");
	printf("\n");
	printf("Que es lo que desea realizar??\n");
	scanf("%i",&n);
	switch(n){
	
		case 1: 
			printf("-----     MENU      -----\n");
			printf("-------------------------\n");
			printf("       1.- Suma\n");
			printf("-------------------------\n");
			printf("       2.- Resta\n");	
			printf("-------------------------\n");
			printf("      3.- Divicion\n");
			printf("-------------------------\n");
			printf("   4.- Multiplicacion\n");
			printf("-------------------------\n");
			printf("Que es lo que desea realizar??\n");
			scanf("%i",&nn);
					
			do{
				
				switch (nn){
				
					case 1:
			  			printf("Ingresa un numero\n");
			  			scanf("%i",&n1);
			  			printf("Ingresa un numero\n");
			  			scanf("%i",&n2);
			  			sum=n1+n2;
			  			printf("La suma es %0.1f\n",sum);
			  			break;
			  		case 2:
			  			printf("Ingresa un numero\n");
			  			scanf("%i",&n1);
			  			printf("Ingresa un numero\n");
			  			scanf("%i",&n2);
			  			res=n1-n2;
			  			printf("La resta es %0.1f\n",res);
			  			break;
			  		case 3:
			  			printf("Ingresa un numero\n");
			  			scanf("%i",&n1);
			  			printf("Ingresa un numero\n");
			  			scanf("%i",&n2);
			  			div=n1/n2;
			  			printf("La divicion es %0.1f\n",div);
			  			break;
			  		case 4:
			  			printf("Ingresa un numero\n");
			  			scanf("%i",&n1);
			  			printf("Ingresa un numero\n");
			  			scanf("%i",&n2);
			 			mul=n1*n2;
			  			printf("La multiplicacion es %0.1f\n",mul);
			  			
			  			break;
			  			
			  	}
			  }while (volver);
		
		
	  
	  
	  	
	
}
}