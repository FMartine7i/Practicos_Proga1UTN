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

    for(int fila = 0; fila < n; fila++){
        if(fila % 2 == 0){  
              // tramo 1
            for(int col = 0; col < n; col++){
                cout << matriz[fila][col] << "\t";
            }            
        }
        else{   
              // tramo 2
            for(int col = n - 1; col >= 0; col--){
               cout << matriz[fila][col] << "\t"; 
            }
        }
        cout << endl;
    }
}