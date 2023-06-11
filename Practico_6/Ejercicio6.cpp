#include <iostream>
using namespace std;

const int n = 3; 

int sumaElem(int matriz[n][n]){
    int suma = 0;

    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
            suma += matriz[i][j];
        }
    }
    return suma;
}

int main(){

    int matriz[n][n];

    // ingresar elementos de la matriz
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Ingrese un número: ";
            cin >> matriz[i][j];
        }
    }

    // imprimir matriz
    for( int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // suma los elementos de la matriz
    int resultado = sumaElem(matriz);
    cout << resultado << endl;

    return 0;
}