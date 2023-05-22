#include <iostream>
using namespace std;

int main(){
    int maximo = 10;
    typedef int numeros[maximo];
    int suma = 0;

    numeros arreglo;

    for ( int i = 0; i < maximo; i++ ){
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    for ( int i = 0; i < maximo; i++ ){
        suma += arreglo[i];
    }

    cout << "La sumatoria de los numeros ingresados es: " << suma << endl;
}