#include <stdio.h>
  int main(){
    char nombre [50];


    printf("--- Registro de usuario ---\n");


    printf("Por favor, introduce tu nombre: ");

    scanf("%s",nombre);

    printf ("-------------------------------\n");
    printf ("¡Hola,%s!Bienvenido al sistema.\n",nombre);
    printf ("-------------------------------\n");

    return 0;



  }
