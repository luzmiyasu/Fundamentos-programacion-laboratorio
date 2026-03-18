#include <stdio.h>

int main(){

//Declaracion de variables

float numero1,numero2,suma;

//Entrada de datos
 printf("ingrese el primer numero:");
 scanf("%f",& numero1);

 printf("ingrese el segundo numero:");
 scanf("%f",& numero2);

 //Proceso
 suma=numero1+numero2;

 //Salida
 printf("La suma es: %.2f\n",suma);


 return 0;
}


