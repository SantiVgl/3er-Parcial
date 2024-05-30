#include <iostream>
using namespace std;

int main()
{
    int n, i=0,acum=0;
int vector[20];
  for(int i=0;i<20;i++){
      cout<<"ingresa numero entero"<<i<<":";
      cin>>n;
      vector[i]=n;
      acum+=n;
      if(n==0){
          break;
      }
    
  }
  cout<<"tus numeros ingresados son \n"<<i<<endl;
  for(int i=20;i>=0;i--){
      cout<< "el numero"<<i<< "ingresado fue"<<vector[i]<<endl;
  }
  
  return 0;
}