#include <iostream>
using namespace std;

const int n = 3; 

void suma(int matriz1[n][n], int matriz2[n][n]){
    int matrizSuma[n][n]; // Matriz para almacenar la suma de los elementos

    // Sumar los elementos de las matrices
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matrizSuma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    cout << "Matriz suma: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrizSuma[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int matriz1[n][n];
    int matriz2[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "ingrese un valor para la primer matriz: ";
            cin >> matriz1[i][j];
        }
    }

    cout << "\n" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "ingrese un valor para la segunda matriz: ";
            cin >> matriz2[i][j];
        }
    }

    // Llamar a la función suma para sumar las matrices
    suma(matriz1, matriz2);

    return 0;
}