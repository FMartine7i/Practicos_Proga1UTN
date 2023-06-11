#include <iostream>
using namespace std;

int sumaArreglo(int arreglo[], int& size){
    int suma = 0;
    for (int i = 0; i < size; i++){
        suma += arreglo[i];
    }
    return suma;
}

int main(){

    int size;

    cout << "Ingrese un tamaño para el arreglo: ";
    cin >> size;

    int arreglo[size];

    for (int i = 0; i < size; i++) {
        cout << "Ingrese un número: ";
        cin >> arreglo[i];
    }

    int resultado = sumaArreglo(arreglo, size);
    cout << resultado << endl;

    return 0;
}