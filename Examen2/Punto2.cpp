#include <iostream>
using namespace std;

int main(){

    int n = 6;
    int matriz[n][n];

    // Armar matriz con números elegidos por el usuario
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Ingrese valor: ";
            cin >> matriz[i][j];
        }
    }

    // Mostrar en forma matricial
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;    
    }

    for(int fila = n - 1; fila >= 0; fila--){
        //tramo 1
        for(int col = n -1; col >= (n - fila - 2); col--){
            cout << matriz[col][fila] << "\t";
        }
        for (int f = fila - 1; f >= 0; f--){
            cout << matriz[f][n - fila - 1];
        }
        cout << endl;
    }
    return 0;
}