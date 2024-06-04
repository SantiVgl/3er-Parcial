#include <iostream>
using namespace std;

int main() {
    int numeros[10], suma = 0, mayor, menor;

    cout<<"Dame 10 numeros:"<<endl;
    for (int i =0;i<10;i++) {
        cin>>numeros[i];
        suma+=numeros[i];
        if (i==0) {
            mayor=numeros[i];
            menor=numeros[i];
        } else {
            if (numeros[i] > mayor) {
                mayor = numeros[i];
            }
            if (numeros[i] < menor) {
                menor = numeros[i];
            }
        }
    }
    cout<<"La suma es: "<<suma<<endl;
    cout<<"El mayor: "<<mayor<<endl;
    cout<<"El menor: "<<menor<<endl;

    return 0;
}