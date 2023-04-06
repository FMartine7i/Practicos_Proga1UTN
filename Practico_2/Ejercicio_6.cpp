#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float nota1, nota2, nota3, total;

    cout << "Ingresá la nota del primer parcial." << endl;
    cin >> nota1;
    cout << "Ahora ingresá la nota de la segunda nota." << endl;
    cin >> nota2;
    cout << "Por último ingresá la nota de la tercera nota." << endl;
    cin >> nota3;

    total = nota1 + nota2 + nota3;

    float promedio = total/3;
    cout << "El promedio es: " << promedio << endl;

    int promedio_redondeado = round(promedio);
    cout << "El promedio redondeado es: " << promedio_redondeado << endl;

    float promedio_truncado = trunc(promedio);
    cout << "El promedio truncado es: " << promedio_truncado << endl;

    return 0;
}