#include<stdio.h>

int main (){
    int efin,tfin,cp1,cp2,cp3;
    float poref,portf,cp,cf,cpf;
    printf("Ingresa tus calificaciones parciales :\n");
    scanf("%i",&cp1);
    scanf("%i",&cp2);
    scanf("%i",&cp3);
    cpf=((cp1+cp2+cp3)/3);
    cp=(cpf*.55);
    printf("Ingresa tu califiacion de examen final \n");
    scanf("%i",&efin);
    poref=(efin*.30);
    printf("Ingresa tu calificacion de trabajo final :\n");
    scanf("%i",&tfin);
    portf=(tfin*.15);
    cf=(cp+poref+portf);
    printf("Tu calificacion final es de : %.2f",cf);



}