#include <iostream>
using namespace std;

int main(){

    const int size = 5;
    char TMatriz[size][size];
    const char fill = 'X';

    // Ingresar la diagonal principal de la matriz
    cout << "Ingresar los elementos de la diagonal principal:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> TMatriz[i][i];
    }

    cout << "\n  Matriz" << endl;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if (i != j) {
                TMatriz[i][j] = fill;
            }
        }
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++)
            cout << TMatriz[i][j] << " ";
        cout << endl;
    }
    return 0;   
}