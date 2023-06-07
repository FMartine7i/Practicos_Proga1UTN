#include <iostream>
using namespace std;

int main(){
    int arreglo[10] = {24, 5, 58, 100, 0, -8, 94, 96, -16, 105};
    int aux;

    for(int i = 0; i < 10; i++){
        for( int j = 0; j < 10; j++){
            if (arreglo[j] < arreglo[j + 1]){   // si el anterior es menor al siguiente, cambian de lugar 
               aux = arreglo[j];
               arreglo[j] = arreglo[j + 1];
               arreglo[j + 1] = aux;
            } 
        }      
    }
    cout << "Arreglo ordenado de forma ascedente: " << endl;
    for (int i = 9; i > 0; i--) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}