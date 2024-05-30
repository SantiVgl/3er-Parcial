#include <iostream>
using namespace std;

int main() {
    const int fil = 4;
    const int columnas = 3;
    int tabla[fil][columnas];

    cout<<"dame los valores para la tabla (4 filas y 3 columnas):" << endl;
    for (int i=0;i<fil;++i) {
        for (int j=0;j<columnas;++j) {
            cout<<""<<i<<""<<j<<"";
            cin>>tabla[i][j];
        }
    }
    cout<<"\nlos numeros son:"<<endl;
    for (int i=0;i<fil;++i) {
        for (int j=0;j<columnas;++j) {
            cout<<tabla[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
