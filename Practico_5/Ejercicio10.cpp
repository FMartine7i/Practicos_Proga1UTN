#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int fila, col;

    cout << "Ingresar cantidad de filas: " << endl;
    cin >> fila;
    cout << "Ingresar cantidad de columnas: " << endl;
    cin >> col;

    int TMatriz[fila][col];

    if (fila > 10 || col > 10){
        cout << "Solo se aceptan valores menores o iguales a 10" << endl;
    }
    else{
        for(int i = 0; i < fila; i++){
        for(int j = 0; j < col; j++){
            if ((i + j) % 2 == 0){
                TMatriz[i][j] = sqrt(i + j);
            }
            else{
                TMatriz[i][j] =  0;
            }
        }
    }

        cout << "MATRIZ RESULTANTE" << endl;
        for (int i = 0; i < fila; i++) {
            for (int j = 0; j < col; j++) {
                cout << TMatriz[i][j] << " ";
            }
            cout << endl;
    }
    }
    
    return 0;
}