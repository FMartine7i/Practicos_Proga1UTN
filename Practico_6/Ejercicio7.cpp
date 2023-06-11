#include <iostream>
using namespace std;

void promedio(int n, int arreglo[]){
    int suma = 0;

    for(int i = 0; i < n; i++){
        suma += arreglo[i];
    }

    int promedio = suma / n;

    cout << "Promedio: " << promedio << endl;

}

int main(){
    int n;
    int arreglo[n];

    cout << "Ingrese el tamaño del arreglo..." << endl;
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Ingrese un número para el arreglo: ";
        cin >> arreglo[i];
    }

    // imprimir arreglo
    cout << "Arreglo: " << endl;
    for(int i = 0; i < n; i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;

    promedio(n, arreglo);

    return 0;
}