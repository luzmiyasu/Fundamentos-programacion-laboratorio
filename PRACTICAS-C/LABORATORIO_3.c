#include <stdio.h>

int main(){

    float base,altura,proceso,area;

    printf ("Ingrese la altura del triangulo:");
    scanf("%f",&altura);

    printf ("Ingrese la base del triangulo:");
    scanf("%f",&base);

    area=(base*altura)/2;


    printf("\t");

    printf("---------------------AREA_DEL_TRIANGULO------------------\n");

    printf("ALTURA\tBASE\tAREA\n");
    printf("=========================================================\n");

    printf ("%1.f\t%.1f\t%2.f\n", altura, base , area );
    printf("=========================================================\n");
return 0;

}
