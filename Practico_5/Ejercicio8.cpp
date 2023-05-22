#include <iostream>
#include <ctime>
using namespace std;

int main(){

    srand(time(0));
    const int size = 10;
    int num;
    int TMatriz[size][size];
    int sumaFilas[size] = {0};
    bool encontrado = false;

    cout << "\tMATRIZ ALEATORIA" << endl;
    //elige un número aleatorio
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            TMatriz[i][j] = rand() % 100 + 1;
            sumaFilas[i] += TMatriz[i][j];
            cout << TMatriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n" <<endl;

    
    cout << "ARREGLO SUMA" << endl;
    for(int i = 0; i < size; i++){
        cout << sumaFilas[i] << " ";
    }
    cout << endl;

    cout << "Ingresar un número: ";
    cin >> num;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if ( num == TMatriz[i][j] ){
                encontrado = true;
                cout << num << " ha sido encontrado en la fila " << i << ", columna " << j << endl;
            }
        }
    }

    if(!encontrado){
        cout << "El número no se ha encontrado en la matriz." << endl;
    }

    return 0;
}