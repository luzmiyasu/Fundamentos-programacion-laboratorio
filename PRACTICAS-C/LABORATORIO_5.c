#include <stdio.h>
#include <math.h>// es para que funcione el pow//

int main(){

    float radio,altura,area,volumen,suma;
    const float PI=3.14159265;

    printf("-----CALCULO DE GEOMETRIA DEL CILINDRO------\n");

    printf("Ingrese el valor del radio (r):");
    scanf("%f",&radio);

    printf("Ingrese el valor de la altura(h):");
    scanf("%f",&altura);

   if (radio<=0 ||altura<=0){   // || significa "O", && significa "Y"//

        printf("\nERROR: El radio y la altura deben ser mayores a cero.\n");
        printf("No se pueden realizar los calculos con valores invalidos");
    }
    else{

    area=2*PI*radio*altura;
    volumen=PI*pow(radio,2)*altura;

    printf("\nResultados Calculados\n");
    printf("\n-------------------------------------\n");

    printf ("Radio ingresado:   %.2f\n", radio);
    printf ("Altura ingresada:  %.2f\n", altura);

    printf("\n--------------------------------------\n");

    printf ("Area lateral:   %.2f unidades cuadradas\n",area);
    printf ("Altura      :   %.2f unidades cubicas\n",altura);

    printf("\n--------------------------------------\n");
    }


    printf("Suma de valores obtenidos\n");

    suma=area+altura;

    printf("la suma total es de: %.2f",suma);


    return 0;

}
