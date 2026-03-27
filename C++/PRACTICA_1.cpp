//Switch valores fijos , estructueras o condicionales simples
//switch (variable){
//case valor 1: ----se dan las instrucciones
#include <iostream>
using namespace std;

int main(){
    int opcion;

    cout <<"Seleccione tipo de usuario:\n";
    cout <<"1.Administrador\n";
    cout <<"2.Cliente\n";
    cout <<"3.Invitado\n";
    cout <<"Ingrese opcion: ";
    cin >> opcion;

    // que valor estoy ingresando

    switch (opcion){
    case 1:


        cout <<"\nAcceso total al sistema\n";
        break;

    case 2:

        cout <<"\nAcceso limitado\n";
        break;

    case 3:

        cout <<"\nAcceso solo a visualizacion\n";
        break;

    default :

        cout <<"\nNo es un tipo de usuario";
        break;

    }

    return 0;

}
