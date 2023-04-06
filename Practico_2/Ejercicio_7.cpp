#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float alfa, beta, gamma, a, b, c, aux;
    b = 4;
    alfa = 90*M_PI/180;
    gamma = 60*M_PI/180;
    beta = M_PI - alfa - gamma;

    a = 4*tan(beta);
    aux = pow(a, 2) + pow(b, 2);
    c = sqrt(aux);
    beta = beta*180/M_PI; // conversión para que el programa me devuelva el valor en grados y no en radianes. 

    cout << "El valor de β es: " << beta << " grados, el valor de a es: " << a << " y el valor de c es: " << c << endl;

    return 0;
}