#include <iostream>
using namespace std;

int main() {
    int opcion;
    float base, altura, lado1, lado2, base_mayor, base_menor, area;
    cout<<"Areas"<<endl;
    cout<<"1. Calcula el area de un triangulo"<<endl;
    cout<<"2. Calcula el area de un trapecio"<<endl;
    cout<<"3. Calcula el area de un rectangulo"<<endl;
    cout<<"Seleccione una opcion: ";
    cin>>opcion;

    switch(opcion) {
        case 1:
            cout<<"Dame la base del triangulo ";
            cin>>base;
            cout<<"Dame la altura del triangulo ";
            cin>>altura;
            area=(base*altura) / 2;
            cout<<"El area del triangulo es: "<<area<<endl;
            break;
        case 2:
            cout<<"Dame la base mayor del trapecio ";
            cin>>base_mayor;
            cout<<"Dame la base menor del trapecio ";
            cin>>base_menor;
            cout<<"Dame la altura del trapecio ";
            cin>>altura;
            area=((base_mayor+base_menor)*altura) / 2;
            cout<<"El area del trapecio es: "<<area<<endl;
            break;
        case 3:
            cout<<"Dame la base del rectangulo: ";
            cin>>base;
            cout<<"Dame la altura del rectangulo: ";
            cin>>altura;
            area=base*altura;
            cout<<"El area del rectangulo es "<<area<<endl;
            break;
        default:
            cout<<"Opcion no valida"<<endl;
            break;
    }

    return 0;
}