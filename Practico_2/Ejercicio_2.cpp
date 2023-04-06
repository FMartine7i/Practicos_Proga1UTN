#include <iostream>
using namespace std;

int main(){
    float grados, radianes;
    const float pi = 3.1415926;

    cout << "ingrese los datos en grados:" << endl;
    cin >> grados;
    radianes = grados*pi/180; 
    cout << grados << " grados = " << radianes << " radianes." << endl;

}