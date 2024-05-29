#include<stdio.h>

float dc, ps,pn;
int main (){
    printf("Ingrese el precio del produto : \n");
    scanf("%f",&ps);
    dc=(15*ps)/100;
    pn=ps-dc;
    printf("El precio con descuento es de %f : \n",pn);
    printf("EL descuento para la compra es de %f:\n",dc);




}