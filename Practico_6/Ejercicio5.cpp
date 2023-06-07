#include <iostream>
#include <ctime>
using namespace std;

int ordenar(int arreglo[], int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (arreglo[j] > arreglo[j + 1]){
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
    return 0;
}

int busqueda(int arreglo[], int size, int num){
    int inicio = 0;
    int fin = size - 1;
    int medio = inicio + (fin - inicio) / 2;

    while( inicio <= fin ){
        if (arreglo[medio] == num){
            return medio;
        }
        else if (arreglo[medio] < num){
            inicio = medio + 1;
        }
        else{
            inicio = medio - 1;
        }
    }
    return -1;
}

int main(){

    srand(time(0));
    const int size = 10;
    int arreglo[size];

    // cargar el arreglo con números aleatorios
    for (int i=0; i < 10; i++){
        arreglo[i] = rand() % 100 + 1;
    }

    // ordenar de forma ascendente
    ordenar(arreglo, size);
    
    // mostrar el arreglo ordenado
    for (int i=0; i < size; i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;

    // Solicitar un número al usuario para buscar
    int num;
    cout << "Ingrese un número a buscar: ";
    cin >> num;

    // realizar busqueda binaria
    int indice = busqueda(arreglo, size, num);

    if (indice != -1){
        cout << num << " se encuentra en la posicón: " << indice << endl;
    }
    else{
        cout << "No se ha encontrado el numero " << num << " en el arreglo." << endl;
    }
    return 0;
}