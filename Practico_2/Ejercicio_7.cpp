#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float α, β, ɣ, a, b, c, aux;
    b = 4;
    α = 90*M_PI/180;
    ɣ = 60*M_PI/180;
    β = M_PI - α - ɣ;

    a = 4*tan(β);
    aux = pow(a, 2) + pow(b, 2);
    c = sqrt(aux);
    β = β*180/M_PI; // conversión para que el programa me devuelva el valor en grados y no en radianes. 

    cout << "El valor de β es: " << β << " grados, el valor de a es: " << a << " y el valor de c es: " << c << endl;

    return 0;
}