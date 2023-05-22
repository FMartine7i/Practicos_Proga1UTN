#include <iostream>
using namespace std;

int main(){

    srand(time(0));
    int N = 16;
    int arreglo[N];
    int size = 4;
    int matriz[size][size];

    cout << "arreglo = { ";
    for(int i = 0; i < N; i++){
        arreglo[i] = rand() % 100 + 1;
        cout << arreglo[i] << " ";
    }
    cout << " }" << endl;

    cout << "\n   MATRIZ\n";
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            int indice = i * size + j;
            matriz[i][j] = arreglo[indice];
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}