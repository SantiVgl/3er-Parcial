#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, acum = 0;
    int vector[20];

    for (i = 0; i < 20; i++) {
        cout << "ingresa numero entero " << i << ": ";
        cin >> n;
        vector[i] = n;
        acum += n;
        if (n == 0) {
            break;
        }
    }

    cout << "tus numeros ingresados son \n";
    for (int j = i - 1; j >= 0; j--) {
        cout << "el numero " << j << " ingresado fue " << vector[j] << endl;
    }

    return 0;
}