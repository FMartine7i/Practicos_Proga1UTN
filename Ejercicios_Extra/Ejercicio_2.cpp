#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float angulo, angEnRadianes, seno, coseno, tangente;
    int vueltas, cuadrante;
    cout << "Ingresar un ángulo en grados: ";
    cin >> angulo;

    angEnRadianes = angulo * M_PI / 180;

    cout << "Valor en radianes: " << angEnRadianes << endl;
    
    if(angulo > 360){
        vueltas = (int)angulo / 360;
        cuadrante = (int)round(angulo / 90) % 4;
        cout << "El ángulo dio " << vueltas << " vueltas y se encuentra en el cuadrante " << cuadrante << endl;
    }
    else{
        seno = sin(angEnRadianes);
        coseno = cos(angEnRadianes);
        tangente = tan(angEnRadianes);

        cout << "La tangente del ángulo es: " << tangente << ", el coseno es: " << coseno << " y el seno es:  " << seno << endl;
    }
    
    return 0;
}