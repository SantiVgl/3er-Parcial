#include <iostream>
using namespace std;

int main() {
    int num=1;

    cout<<"Numeros del 1 al 100"<<endl;
    for (num=1;num<=100;num++) {
        cout<<num<<endl;
    }
    cout<<"\nNumeros del 1 al 100 de dos en dos"<<endl;
    num=1;
    while(num<=100) {
        cout<<num<<endl;
        num+=2;
    }
    cout<<"\nNumeros del 100 al 1"<<endl;
    for (num=100;num>=1;num--) {
        cout<<num<<endl;
    }

    return 0;
}