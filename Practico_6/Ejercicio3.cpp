#include <iostream>
using namespace std;

int valorMaximo(int arreglo[], int& size){

    int max = 0;

    for (int i = 0; i < size; i++){
        if (arreglo[i] > max){
            max = arreglo[i];
        }
    }
    return max;
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

    int max = valorMaximo(arreglo, size);
    cout << max << endl;

    return 0;
}