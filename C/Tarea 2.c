#include<stdio.h>

int main (){
    
    int cp,cfp,ef,tf;
    float c1,c2,c3,cef,CF,ctf;
    printf ("Ingrese sus tres calificaciones :\n");

    scanf("%f",&c1);
    scanf("%f",&c2);
    scanf("%f",&c3);
    cp=(c1+c2+c3)/3;
    cfp=(cp*.55);
    printf("Ingresa tu calificacion de examen final :\n");
    scanf("%i",&ef);
    cef=(ef*.30);
    printf("Ingresa tu calificacion de trabajo final :\n");
    scanf("%i",&tf);
    ctf=(tf*.15);
    CF= (cfp+cef+ctf);
    printf("Tu calificacion de trabajo final es de :%.2f",CF);











}