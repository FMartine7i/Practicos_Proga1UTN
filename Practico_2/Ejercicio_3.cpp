#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float angulo, seno, coseno, tangente;

    cout << "ingrese un ángulo." << endl;
    cin >> angulo;
    float angulo_en_radian = angulo*M_PI/180;

    seno = sin(angulo_en_radian);
    coseno = cos(angulo_en_radian);
    tangente = tan(angulo_en_radian);
    cout << "El seno de " << angulo << " es " << seno << endl;
    cout << "El coseno de " << angulo << " es " << coseno << endl;
    cout << "La tangente de " << angulo << " es " << tangente << endl;

    return 0;
}