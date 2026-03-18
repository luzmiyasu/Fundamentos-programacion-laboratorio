#include <stdio.h>

int main(){

    char nombre[50],producto[50];
    float cantidad,precio,total;


    printf ("Ingrese su nombre:");
    scanf("%s",nombre);

     printf ("Ingrese el nombre del producto:");
    scanf("%s",producto);

    printf ("Ingrese la cantidad de productos:");
    scanf("%f",&cantidad);

    printf ("Ingrese el precio del producto:");
    scanf("%f",&precio);

    total=cantidad*precio;

    printf ("Su nombre es:%s\n",nombre);

    printf("----------REPORTE_DE_VENTAS------------\n");

    printf("PRODUCTO\tCANTIDAD\tPRECIO\tTOTAL\n");
    printf("========================================\n");

    printf ("%s \t\t%f\t%.2f\t%2.f\n", producto , cantidad , precio , total );
    printf("========================================\n");
return 0;

}
