#include <iostream>
using namespace std;


int main(){

    srand(time(0));

    int size = 10;
    int arreglo[size];

    // Rellenar el arreglo con valores aleatorios entre 1 y 100
    for (int i = 0; i < size; i++){
        arreglo[i] = rand() % 100 + 1;
    }

    // ordenar el arreglo
    for (int i = 0; i < size; i++){
        for( int j = 0; j < size - i - 1; j++){
            if( arreglo[j] > arreglo[j + 1] ){
                int aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }

    cout << "El arreglo ordenado es: ";
    for (int i = 0; i < size; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}