#include <iostream>
using namespace std;
int main(){

    float a,b,suma,resta,multiplicacion,division;
    int operacion;

    cout <<"  CALCULADORA BASICA  \n";

    cout <<"1.suma\n";
    cout <<"2.resta\n";
    cout <<"3.multiplicacion\n";
    cout <<"4.division\n";
    cout <<"Ingrese la opcion:\n";
    cin >> operacion;

    cout <<"Ingrese el primer numero:";
    cin >> a;
    cout <<"Ingrese el segundo numero:";
    cin >> b;

    switch (operacion){
    case 1:
        suma=a+b;
        cout <<"suma:"<<suma;

        break;
    case 2:
        resta=a-b;
        cout <<"resta:"<<resta;
        break;
    case 3:
         multiplicacion=a*b;
         cout <<"multiplicacion:"<<multiplicacion;
         break;

    case 4:

         if ( b<=0){
           cout <<"No se puede dividir entre 0:";
        }else{
          division=a/b;
          cout <<"division:"<<division;
        }
        break;

     default :
        cout <<"\nNo es un tipo de operacion";
        break;
    }

return 0;

}
