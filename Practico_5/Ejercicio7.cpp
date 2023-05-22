#include <iostream>
using namespace std;

int main(){
    const int size = 5;
    int TMatriz[size][size];

    cout << "  MATRIZ" << endl;  
    for(int i = 1; i <= size; i++){
        for(int j = 1; j <= size; j++){
            TMatriz[i - 1][j - 1] = i + j;
            cout << TMatriz[i - 1][j - 1] << " ";
        }
        cout << endl;
    }
    return 0;
}