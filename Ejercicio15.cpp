#include <iostream>
using namespace std;

int main() {
    float horasChambeadeas, precioPorHoras, salarioSemanal;

    cout<<"Dame horas trabajadas de esta semana: ";
    cin>>horasChambeadeas;

    cout<<"Dame el precio por hora: ";
    cin>>precioPorHoras;

    if (horasChambeadeas <= 40) {
        salarioSemanal = horasChambeadeas * precioPorHoras;
    } else {
        salarioSemanal = 40 * precioPorHoras + (horasChambeadeas - 40) * (1.5 * precioPorHoras);
    }

    cout<<"El salario semanal es: $"<<salarioSemanal<<endl;

    return 0;
}