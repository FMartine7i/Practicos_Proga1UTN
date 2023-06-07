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
        for( int i = 0; i < 10; i++ ){
           if (i < 10 - longitud) {
                arreglo[i] = vacio;
            } 
        else {
                arreglo[i] = palabra[longitud - i];
            }
        }

        for (int i = 0; i < 10; i++){
            cout << arreglo[i];
        }
        cout << endl;
    }
    return 0;   
}