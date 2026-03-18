#include <stdio.h>

int main(){

 char nombre[50],carrera[50];
 int edad,semestre;

 printf ("Ingrese su nombre:");
 scanf("%s",nombre);

 printf ("Ingrese su edad:");
 scanf("%d",&edad);

 printf ("Ingrese el nombre de su carrera:");
 scanf("%s",carrera);

 printf ("Ingrese el semestre que esta cursando:");
 scanf("%d",&semestre);

 printf ("========================\n");

 printf ("Su nombre es:%s\n",nombre);
 printf ("Su edad es:%d\n",edad);
 printf ("Su carrera es:%s\n",carrera);
 printf ("El semestre cursado es:%d\n",semestre);


return 0;

}
