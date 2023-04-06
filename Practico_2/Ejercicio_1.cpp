#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float num, valor_abs, raiz_cuadrada;

    cout << "ingrese un número cualquiera." << endl;
    cin >> num;
    valor_abs = abs(num);
    raiz_cuadrada = sqrt(valor_abs);
    cout << "La raíz cuadrada de " << num << " es " << raiz_cuadrada << endl;
}