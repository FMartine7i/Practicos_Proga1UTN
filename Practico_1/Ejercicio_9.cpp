#include <iostream>
using namespace std;

main(){
    float altura, base, area; // todas las variables deben ser asignadas como flotantes, de otra forma el resultado del area me dará un entero "7", en lugar de "7.5"
    altura = 3;
    base = 5;
    area = (base*altura) / 2;

    cout << "El área del triángulo es: " << area << endl;

}