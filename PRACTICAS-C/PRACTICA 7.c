#include <stdio.h>

int main(){

  char nombre[50];

  float hora, pago, dias ,multiplicar;

  printf ("Por favor,introdusca su nombre:");
  scanf("%s",nombre);

  printf ("Hola, %s\n",nombre);

  printf("Introdusca las horas trabajabas:" );
  scanf("%f",&hora);

  printf("Introdusca el Pago por hora de trabajo: ");
  scanf("%f",&pago);

  printf("Introdusca los dias de trabajo: ");
  scanf("%f",&dias);

  multiplicar=hora*pago*dias;

  printf("Su ingreso es de:%.2f\n",multiplicar);

  return 0;


}
