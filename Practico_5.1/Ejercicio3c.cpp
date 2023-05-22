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

    // inicio 1
    for(int col = 0; col < (n/2); col++){
        // tramo 1
        for(int fila = n - 1; fila >= (n/2) - col; fila--){
            cout << matriz[fila][col] << " ";
        }
        // tramo 2
        for(int fila = col; fila >= 0; fila--){
            cout << matriz[(n/2) - 1 - col][fila] << " ";
        }
        cout << endl;
    }

     // inicio 2
     for(int col = (n/2); col < n; col++){
        // tramo 1
        for(int fila = 0; fila < n + (n/2) - col - 1; fila++){
            cout << matriz[fila][col] << " ";
        }
        // tramo 2
        for(int fila = col; fila < n; fila++){
            cout << matriz[n + (n/2) - col - 1][fila] << " ";
        }
        cout << endl;
     }       
    return 0;
}