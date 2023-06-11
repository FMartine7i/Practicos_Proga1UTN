#include <iostream>
using namespace std;

void insercion(int& n, int numeros[]);
void insercion_intercambio(int& n, int numeros[]);
void seleccion_directa(int& n, int numeros[]);
void bubbleSort(int& n, int numeros[]);

int main(){
    int n = 6;
    int numeros[] = {6, 1, 8, 2, 3, 4};
    int pos, aux;

    cout << "Arreglo original: ";
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << "\n" << endl;

    //insercion(n, numeros);
    //insercion_intercambio(n, numeros);
    //seleccion_directa(n, numeros);
    bubbleSort(n, numeros);

    // imprimir
    cout << "Arreglo ordenado: ";
    for(int j = 0; j < n; j++){
        cout << numeros[j] << " ";
    }
    cout << endl;

    return 0;
}

// por inseción

void insercion(int& n, int numeros[]){
    for (int i  =0; i < n; i++){
        int pos = i;
        int aux = numeros[i];

        while((pos > 0) && (numeros[pos - 1] > aux)){    
            numeros[pos] = numeros[pos - 1];
            pos--;
        }
        numeros[pos] = aux;
    }
}

void insercion_intercambio(int& n, int numeros[]){
    for(int i = 0; i < n; i++){
        int pos = i;
        int tmp;

        while((pos > 0) && (numeros[pos - 1] > numeros[pos])){
            // intercambio con la variable temporal
            tmp = numeros[pos];
            numeros[pos] = numeros[pos - 1];
            numeros[pos - 1] = tmp;
            pos--;
        }
    }
}

void seleccion_directa(int& n, int numeros[]){
    for(int i = 0; i < n - 1; i++){
        int minIndex = i;

        //buscar el elemento mínimo en la sección no ordenada
        for(int j = i + 1; j < n; j++){
            if(numeros[j] < numeros[minIndex]){
                minIndex = j;
            }
        }

        // Intercambiar el elemento mínimo con el primer elemento de la sección no ordenada
        if (minIndex != i) {
            int temp = numeros[i];
            numeros[i] = numeros[minIndex];
            numeros[minIndex] = temp;
        }
    }
}

void bubbleSort(int& n, int numeros[]){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(numeros[j] > numeros[j + 1]){
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
}