#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int nota1, nota2, nota3;

    cout << "Ingresá las 3 notas de los parciales entre espacios: ";
    cin >> nota1 >> nota2 >> nota3;

    float total = (float)nota1 + nota2 + nota3;

    float promedio = total/3;
    cout << "El promedio es: " << promedio << endl;

    int promedio_redondeado = round(promedio);
    cout << "El promedio redondeado es: " << promedio_redondeado << endl;

    float promedio_truncado = trunc(promedio);
    cout << "El promedio truncado es: " << promedio_truncado << endl;

    return 0;
}