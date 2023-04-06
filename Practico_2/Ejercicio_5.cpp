#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float catetoA, catetoO, suma, hipotenusa;

    cout << "Ingresá un valor para el cateto adyacente." << endl;
    cin >> catetoA;
    cout << "Ahora ngresá un valor para el cateto opuesto." << endl;
    cin >> catetoO;

    suma = pow(catetoA, 2) + pow(catetoO, 2);
    hipotenusa = sqrt(suma);
    cout << "La hipotenusa es: " << hipotenusa;

    return 0;
}