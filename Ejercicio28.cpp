#include <iostream>
using namespace std;

int main() {
    int contra;

    cout<<"Ingrese su contrasena (debe ser ¨1234¨): ";
    cin>>contra;
    if (contra=1234) {
        cout<<"Bien venido al sistema\n";
    } else {
        cout<<"Contraseña incorrecta\n";
    }

    return 0;
}