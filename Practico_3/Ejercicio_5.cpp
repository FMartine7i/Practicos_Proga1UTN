#include <iostream>
using namespace std;

int main(){
    int sueldoSemanal, horasTrabajadas;
    const int pagoPorHoras = 1000;

    cout << "Ingresar las horas trabajadas: ";
    cin >> horasTrabajadas;
    
    if( horasTrabajadas <= 40)
        sueldoSemanal = pagoPorHoras*horasTrabajadas;
    else
        sueldoSemanal = 40 * pagoPorHoras + 2000*(horasTrabajadas - 40);

    cout << "El sueldo semanal es de $" << sueldoSemanal << endl;

}