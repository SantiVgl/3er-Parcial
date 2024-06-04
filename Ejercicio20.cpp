#include <iostream>
using namespace std;

int main() {
    int n[10], s = 0, m, me;
    int i = 0;

    cout<<"Dame 10 numeros:" <<endl;
    while (i<10) {
        cin>>n[i];
        s += n[i];
        if (i == 0) {
            m = n[i];
            me = n[i];
        } else {
            if (n[i] > m) {
                m = n[i];
            }
            if (n[i] < me) {
                me = n[i];
            }
        }
        i++;
    }
    cout<<"La suma es: "<<s<<endl;
    cout<<"El mayor: "<<m<<endl;
    cout<<"El menor: "<<me<<endl;

    return 0;
}