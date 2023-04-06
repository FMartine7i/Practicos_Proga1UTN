#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float radio, area;

    cout << "Ingrese el radio del círculo." << endl;
    cin >> radio;
    area = M_PI*pow(radio, 2);
    cout << "El área del círculo es: " << area;

    return 0;
}