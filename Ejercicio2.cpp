#include <iostream>
using namespace std;

int main ()
{
    int num, menor;
    
    cout<<"Ingresa 5 numeros enteros:\n";
    cin>>num;
    menor=num;
    
    for (int i=1;i<5;i++) 
    {
        cin>>num;
        
        if (num<menor) {
            menor=num;
        }
    }
    
    cout<<"El numero menor es: "<<menor<<endl;
    
    return 0;
