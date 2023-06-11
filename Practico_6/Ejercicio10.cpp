#include <iostream>
using namespace std;

const int n = 3;

void sumaFilas(int matriz[n][n], int suma[n]){
    for(int i = 0; i < n; i++) {
        suma[i] = 0; // Inicializar la suma de la fila en 0

        for(int j = 0; j < n; j++) {
            suma[i] += matriz[i][j]; // Sumar los elementos de la fila
        }
    }
}

int main(){
    int matriz[n][n];
    int suma[n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Ingrese un valor: ";
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    
    sumaFilas(matriz, suma);

    // Imprimir el arreglo con las sumas de las filas
    cout << "Sumas de las filas:" << endl;
    for(int i = 0; i < n; i++) {
        cout << suma[i] << " ";
    }
    cout << endl;

    return 0;
}