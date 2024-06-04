#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout<<"Introduce el primer valor: ";
    cin>>a;
    cout<<"Introduce el segundo valor: ";
    cin>>b;
    cout<<"Introduce el tercer valor: ";
    cin>>c;
    if (a<b) {
        int temp=a;
        a=b;
        b=temp;
    }
    if (a<c) {
        int temp=a;
        a=c;
        c=temp;
    }
    if (b<c) {
        int temp=b;
        b=c;
        c=temp;
    }
    cout<<"Los valores ordenados de mayor a menor son: " <<a<<", "<<b<<", "<<c<<endl;

    return 0;
}