#include <stdio.h>
int main(){
	int s1,s2,r1, r2,m1,m2,d1,d2,SUM, RES, DIV, MUL,sal;
	int opm,op;	
	do{
	printf("\t ~BIENVENIDO~\n");
	printf("\t ¿QUE OPERACIÓN DESEAS REALIZAR?\n");
	printf("\t OPERACIONES BASICAS: 1 \n");
	printf("\t TABLAS DE MULTIPLICAR: 2 \n");
	printf("\t FIGURAS GEOMETRICAS: 3 \n");
	printf("\t SALIR: 4 \n");
	scanf("%i", &op);
	system("cls");	
	switch(op){
		do{
		case 1:
		printf("\t¿QUE OPERACION DESEAS REALIZAR?\n");
		printf("\t SUMA: 1 \n");
		printf("\t RESTA: 2 \n");
		printf("\t MULTIPLICACION: 3 \n");
		printf("\t DIVISION: 4 \n");
		scanf("%i", &opm);
		system("cls"); 
		switch(opm){
				case 1:
					printf("SUMA \n");
					printf("INGRESA EL PRIMER NUMERO: ");
					scanf("%i", &s1);
					printf("INGRESA EL SEGUNDO NUMERO: ");
					scanf("%i", &s2);
					SUM= (s1+s2);
					printf("EL RESULTADO ES: %i\n",SUM);
					printf("DESEAS REALIZAR OTRA OPERACION?\n");
					printf(" MENU PRINCIPAL: 1 \n MENU DE OPERACIONES: 2 \n SALIR: CUALQUIER TECLA");
					scanf("%i", &sal);
					printf("---------------------\n");
						system("cls");
					break;
				case 2:
					printf("RESTA \n");
					printf("INGRESA EL PRIMER NUMERO: ");
					scanf("%i", &r1);
					printf("INGRESA EL SEGUNDO NUMERO: ");
					scanf("%i", &r2);
					RES= r1-r2;
					printf("EL RESULTADO ES: %i\n",RES);
					printf("DESEAS REALIZAR OTRA OPERACION?\n");
					printf(" MENU PRINCIPAL: 1 \n MENU DE OPERACIONES: 2 \n SALIR: CUALQUIER TECLA");
					scanf("%i", &sal);
					printf("---------------------\n");
						system("cls");
					break;
				case 3:
					printf("MULTIPLICACION \n");
					printf("INGRESA EL PRIMER NUMERO: ");
					scanf("%i", &m1);
					printf("INGRESA EL SEGUNDO NUMERO: ");
					scanf("%i", &m2);
					MUL= m1*m2;
					printf("EL RESULTADO ES: %i\n",MUL);
					printf("DESEAS REALIZAR OTRA OPERACION?\n");
					printf(" MENU PRINCIPAL: 1 \n MENU DE OPERACIONES: 2 \n SALIR: CUALQUIER TECLA");
					scanf("%i", &sal);
					printf("---------------------\n");
					system("cls");
					break;
				case 4:
					printf("INGRESA EL PRIMER NUMERO: ");
					scanf("%i", &d1);
					printf("INGRESA EL SEGUNDO NUMERO: ");
					scanf("%i", &d2);
					DIV= d1/d2;
					printf("EL RESULTADO ES: %i\n",DIV);
					printf("---------------------\n");
					printf("DESEAS REALIZAR OTRA OPERACION?\n");
					printf(" MENU PRINCIPAL: 1 \n MENU DE OPERACIONES: 2 \n SALIR: CUALQUIER TECLA");
					scanf("%i", &sal);
					system("cls");
					break;
			}
		}while (sal==2);
	case 2:
		printf("TABLAS DE MULTIPLICAR \n");
		printf("MENU PRINCIPAL: 1 \n SALIR: CUALQUIER TECLA");
		scanf("%i", &sal);
		system("cls");
		break;
	case 3:	
		printf("FIGURAS GEOMETRICAS \n");
		printf("MENU PRINCIPAL: 1 \n SALIR: CUALQUIER TECLA");
		scanf("%i", &sal);
		system("cls");
		break;
	case 4:
		printf("GRACIAS VUELVA PRONTO\n");
		printf("---------------------\n");			
		break;
	}
}while(sal==1);
}