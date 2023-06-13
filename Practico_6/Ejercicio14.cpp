#include <iostream>
using namespace std;

int generarNumeroAleatorio(){
    srand(time(0));
    int num = rand() % 1000 + 1;
    return num;
}

bool validarEntrada(int num){
    // if(num < 1000 || num > 0){
    //     return false;
    // }
    // else{
    //     return true;
    // }
    // bool valido = (num < 1000 || num > 0) ? false : true;
    // return valido;
    return num <= 1000 && num >= 1;
}

void comprobarAdivinanza(int numIngresado, int numObjetivo){

    if(numIngresado == numObjetivo){
        cout << "Adivinaste el número" << endl;
    }
    else{
        if(numIngresado < numObjetivo){
            cout << "El número elegido es menor que el numero objetivo. Intentá de nuevo" << endl;
        }
        else
            cout << "El número elegido es mayor que el numero objetivo. Intentá de nuevo" << endl;
    }
}

int main(){
    int numObjetivo = generarNumeroAleatorio();
    int numIngresado;
    int adivinado = false;

    cout << " -------------- Juego de adivinanzas ----------------- " << endl;
    do{
        cout << "Ingresa un número: ";
        cin >> numIngresado;

        if(!validarEntrada(numIngresado)){
            cout << "El numero elegido se encuentra fuera del rango entre 0 y 1000" << endl;
            continue;
        }
        else{
            comprobarAdivinanza(numIngresado, numObjetivo);
            if(numIngresado == numObjetivo){
                adivinado = true;
            }
        }
    }
    while(!adivinado);

    return 0;
}