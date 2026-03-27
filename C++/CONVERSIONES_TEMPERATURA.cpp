#include <iostream>
using namespace std;

int main(){
    int opcion;
    float f,k,r,c;

    cout <<"   TEMPERATURA  \n";

    cout <<"1.FAHRENHEIT\n";
    cout <<"2.KELVIN\n";
    cout <<"3.RANKINE\n";
    cout <<"Seleccione una opcion: \n";
    cin >>opcion;
    cout <<"   \n";


     if (opcion <=0 || opcion >=5){
        cout <<"========================\n";
        cout <<"No es un tipo de operacion\n";
        cout <<"========================\n";
         }
         else{
    cout <<"Ingrese los grados celsius:\n";
    cin >>c;

    switch (opcion){
    case 1:
        f=(c*(9/5))+32;
        cout <<"=======================\n";
        cout <<"Fahrenheit es: "<<f <<"\n";
        cout <<"=======================\n";
        break;
    case 2:
         k=(c*273.25);
        cout <<"=======================\n";
        cout <<"kelvin:\n"<<k<<"\n";
        cout <<"=======================\n";
        break;
    case 3:
         r=(c*(9/5))+491.67;
        cout <<"======================\n";
        cout <<"rankine:\n"<<r<<"\n";
        cout <<"======================\n";
        break;

         }
         }
    return 0;
    }

