#include <iostream>
#include <string>
using namespace std;

int main(){
    string palabra;

    cout << "Ingresá una palabra de no más de 10 letras" << endl;
    cin >> palabra;

    int longitud = palabra.length();
    char arreglo[10];
    const char vacio = '*';

    if(longitud > 10){
        cout << "la palabra ingresada tiene más de 10 letras" << endl;
    }
    else{
        // Llenar el arreglo desde atrás hacia delante
        for( int i = 9; i >= 0; i-- ){
            if (longitud > 0) {
                arreglo[i] = palabra[longitud - 1];
                longitud--;
            }
            else{
                arreglo[i] = vacio;
            }
        }

        for (int i = 0; i < 10; i++){
            cout << arreglo[i];
        }
        cout << endl;
    }
    return 0;   
}