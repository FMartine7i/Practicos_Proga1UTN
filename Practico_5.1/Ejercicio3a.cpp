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

    for(int col = n - 1; col >= 0; col--){
        for(int fila = 0; fila < n; fila++){
            cout << matriz[fila][col] << " ";
        }
        cout << endl;
    }
}