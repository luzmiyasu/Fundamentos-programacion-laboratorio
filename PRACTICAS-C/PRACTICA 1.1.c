#include <stdio.h>

int main(){

//Declaracion de variables

float numero1,numero2,numero3,numero4,numero5,suma;

//Entrada de datos
 printf("ingrese el primer numero:");
 scanf("%f",& numero1);

 printf("ingrese el segundo numero:");
 scanf("%f",& numero2);

 printf("ingrese el tercer numero:");
 scanf("%f",& numero3);

 printf("ingrese el  cuarto numero:");
 scanf("%f",& numero4);

 printf("ingrese el quinto numero:");
 scanf("%f",& numero5);

 //Proceso
 suma=numero1+numero2+numero3+numero4+numero5;

 //Salida
 printf("La suma es: %.2f\n",suma);


 return 0;
}
