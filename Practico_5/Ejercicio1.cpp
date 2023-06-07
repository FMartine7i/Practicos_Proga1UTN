#include <iostream>
using namespace std;

int main(){
    int maximo = 10;
    int numeros[maximo];
    int suma = 0;


    for ( int i = 0; i < maximo; i++ ){
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    for ( int i = 0; i < maximo; i++ ){
        suma += numeros[i];
    }

    cout << "La sumatoria de los numeros ingresados es: " << suma << endl;
}