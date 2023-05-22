#include <iostream>
#include <string>
using namespace std;

int main(){
    string palabra;
    int letras = 0;

    cout << "Ingresar una palabra: " << endl;
    cin >> palabra;

    cout << "Las letras de la palabra ingresada son: " << endl;
    for (int i = 0; i < palabra.length(); i++) {
        cout << palabra[i] << endl;
    }

    return 0;
}