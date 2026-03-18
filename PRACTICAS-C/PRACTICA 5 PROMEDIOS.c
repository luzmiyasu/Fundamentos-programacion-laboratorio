  #include <stdio.h>

    int main(){
    float practica1,practica2,practica3,prac1,prac2,prac3,suma,examen,teoria,proyecto,fin,general;
     const float prac=0.15;
     const float teo=0.35;
     const float fi=0.20;


    printf("------SISTEMA DE NOTAS--------\n");
    printf("\nMATERIA DE PROGRAMACION\n");

    printf("\nIngrese la nota de la practica 1:")  ;
    scanf("%f",&practica1);

    printf("Ingrese la nota de la practica 2:")  ;
    scanf("%f",&practica2);

    printf("Ingrese la nota de la practica 3:")  ;
    scanf("%f",&practica3);

    printf("\nIngrese la nota del examen teorico:") ;
    scanf("%f",&teoria);

    printf("\nIngrese la nota del proyecto Final:") ;
    scanf("%f",&fin);


   if ((practica1>=100 || practica2>=100 || practica3>=100 || teoria>=100|| fin>=100)&&
    (practica1<=0 || practica2<=0|| practica3<=0 || teoria<=0|| fin<=0)){   // || significa "O", && significa "Y"//

        printf("\nERROR: Tu nota no puede ser mayor a los 100 puntos O menores a 0.\n");
        printf("No se pueden realizar los calculos con valores invalidos");

   }
    else{
        prac1=practica1*prac;
        prac2=practica2*prac;
        prac3=practica3*prac;

        suma=prac1+prac2+prac3;

        examen=teoria*teo;

        proyecto=fin*fi;

        general=suma+examen+proyecto;

        printf("\nEl promedio final ponderado: %.2f\n",general)  ;
          if (general>=51){
         printf("\n PASASTE \n");

          }

        else{
          printf("\n REPROBADO \n");

        }

    }

    return 0;

}
