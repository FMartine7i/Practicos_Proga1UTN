#include <iostream>
using namespace std;

int main(){

    srand(time(0));
    const int N = 5;
    const int M= 5;
    int matriz[N][M];
    bool encontrado = false;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++){
            matriz[i][j] = rand() % 100 + 1;
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Comprobar si existen valores repetidos
    bool repetidos = false;

    for (int fila = 0; fila < N; fila++){
        for( int col = 0; col < M; col++){
            for(int i = fila; i < N; i++){
                int startCol = (i == fila) ? col + 1 : 0;
                for (int j = startCol; j < M; j++){
                    if( matriz[fila][col] == matriz[i][j] ){
                        repetidos = true;
                        break;
                    }
                }
                if(repetidos){
                    break;
                }
            }
            if(repetidos){
                break;
            }
        }
        if(repetidos){
            break;
        }
    }

    //Mostrar resultado
    if(repetidos){
        cout << "Existen valores repetidos en la matriz." << endl;
    }
    else{
        cout << "No existen valores repetidos en la matriz." << endl;
    }
    return 0;
}   
