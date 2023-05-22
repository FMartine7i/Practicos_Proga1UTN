#include <iostream>
using namespace std;

int main(){

    srand(time(0));
    int n = 6;
    int matriz[n][n];

    for (int fila = 0; fila < n; fila++) {
        for (int col = 0; col < n; col++) {
            matriz[fila][col] = rand() % 100 + 1;
        }
    }

    //inicio
    for (int col = (n/2) - 1; col > -1; col--) {
        // tramo 1
        for(int fila = 0; fila < col + 3; fila++) {
            cout << matriz[fila][col] << " ";
        }
        // tramo 2
        for(int fila = col; fila > -1; fila--) {
            cout << matriz[col + 3][fila] << " ";
        }
        cout << endl;
        // tramo 3
        for(int fila = 0; fila < col + 3; fila++) {
            cout << matriz[fila][n - col - 1] << " ";
        }
        // tramo 4
        for(int fila = n - col - 1; fila < n; fila++) {
            cout << matriz[col + 3][fila] << " ";
        }
        cout << endl;
    }
    return 0;
}