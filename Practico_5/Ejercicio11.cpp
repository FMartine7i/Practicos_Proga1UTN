#include <iostream>
using namespace std;

int main(){

    int size = 10;
    int TMatriz[size][size];

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if ( i < j){
                TMatriz[i][j] = 1;
            }
            else if( i == j){
                TMatriz[i][j] = size - i;
            }
            else{
                TMatriz[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << TMatriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}