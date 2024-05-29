#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcion,opcion1;
    int volver = 0;
    int n,nn,nt,n1,n2,op,ng,tab,nd;
	float sum,res,mul,div,rr;
    do {
        printf("-------- MENU PRINCIPAL--------\n");
        printf("1. Operaciones basicas\n");
        printf("2. Tablas de multiplicacion\n");
        printf("3. Salir\n");

        printf("Ingrese una opción: ");
        scanf("%d",&opcion1);

        switch (opcion1) {
            case 1:
                printf("Usted ha seleccionado Operaciones Basicas.\n");
                do {
                    printf("1. Suma\n");
                    printf("2. Resta\n");
                    printf("3. Divicion\n");
                    printf("4. Multiplicacion\n");
                    printf("5. Salir\n");

                    printf("Ingrese una opción: ");
                    scanf("%d", &opcion);

                    switch (opcion) {
                        case 1:
                            printf("Usted ha seleccionado Suma.\n");
                            printf("Ingresa un numero\n");
			  			    scanf("%i",&n1);
			  			    printf("Ingresa un numero\n");
			  			    scanf("%i",&n2);
			  			    sum=n1+n2;
			  			    printf("La suma es %0.1f\n",sum);
                            break;
                        case 2:
                            printf("Usted ha seleccionado Resta.\n");
                            printf("Ingresa un numero\n");
			  			    scanf("%i",&n1);
			  			    printf("Ingresa un numero\n");
			  			    scanf("%i",&n2);
			  			    res=n1-n2;
			  			    printf("La resta es %0.1f\n",res);
                            break;
                        case 3:
                            printf("usted ha selecionado Divicion");
                            printf("Ingresa un numero\n");
			  			    scanf("%i",&n1);
			  			    printf("Ingresa un numero\n");
			  			    scanf("%i",&n2);
			  			    div=n1/n2;
			  			    printf("La divicion es %0.1f\n",div);
                        case 4:
                            printf("usted ha selecionado Multiplicacion");
                            printf("Ingresa un numero\n");
			  			    scanf("%i",&n1);
			  			    printf("Ingresa un numero\n");
			  			    scanf("%i",&n2);
			 			    mul=n1*n2;
			  			    printf("La multiplicacion es %0.1f\n",mul);
                        case 5:
                            printf("Saliendo del programa...\n");
                            volver = 0; // Salir del bucle y terminar el programa
                            break;
                        default:
                            printf("Opción inválida. Por favor, seleccione nuevamente.\n");
                            volver = 1; // Permanecer en el bucle para seleccionar otra opción
                            break;
                    }
                } while (volver);

    
                
        case 2:
            printf("Usted ha seleccionado Tablas de multiplicacion\n");
            printf("Cuantas tablas desea?\n");
            scanf("%i",&tab);
            printf("Con que numero desea las tablas?\n");
            scanf("%i",nd);
            for (tab=1; tab <= 10; ++tab);
            {
                printf("%d x %i = %i",tab,nd,tab*nd);
            }
            break;
        case 3:
                printf("Saliendo del programa...\n");
                volver = 0; // Salir del bucle y terminar el programa
                break;
        default:
            printf("Opción inválida. Por favor, seleccione nuevamente.\n");
            volver = 1; // Permanecer en el bucle para seleccionar otra opción
            break;
        }
    } while (volver==1);

    return 0;
}
