#include <iostream>
using namespace std;

int main(){
    int num;
    int arreglo[10] = {24, 5, 58, 100, 0, -8, 94, 96, -16, 105};
    int i = 0;
    bool encontrado = false;
    int posicion = 0;
    /*
    int num;
    typedef int arreglo[10];
    arreglo i = {24, 5, 58, 100, 0, -8, 94, 96, -16, 105};
    */

    cout << "Ingrese un número para buscar en el arreglo: ";
    cin >> num;

    while(i < 10){
        if(num == arreglo[i]){
            encontrado = true;
            posicion = i + 1;
        };
        i++;
    }

    if (encontrado){
        cout << "Se ha encontrado el número " << num << " en la posición " << posicion << endl;
    }
    else{
        cout << "No se ha encontrado el número " << num << endl;
    }
}