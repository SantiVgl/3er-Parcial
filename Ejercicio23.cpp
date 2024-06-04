#include <iostream>
using namespace std;

int main() {
    int num[5], menor;

    cout<<"Dame el primer numero entero ";
    cin>>num[0];
    cout<<"Dame el segundo numero entero ";
    cin>>num[1];
    cout<<"Dame el tercer numero entero ";
    cin>>num[2];
    cout<<"Dame el cuarto numero entero ";
    cin>>num[3];
    cout<<"Dame el quinto numero entero ";
    cin>>num[4];
    menor=num[0];
    if (num[1]<menor) {
        menor=num[1];
    }
    if (num[2]<menor) {
        menor=num[2];
    }
    if (num[3]<menor) {
        menor=num[3];
    }
    if (num[4] < menor) {
        menor=num[4];
    }
    cout<<"El numero menor es "<<menor<<endl;

    return 0;
}