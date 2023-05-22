#include <iostream>
#include <cstdlib>  // necesario para generar números aleatorios
#include <ctime>    // necesario para obtener la semilla de los números aleatorios

using namespace std;

int main(){
    int numeroAdivinar, numeroIngresado, intentos = 0, i = 1;
    srand(time(NULL));  // inicializar la semilla para generar números aleatorios

    // Generar un número aleatorio entre 1 y 100
    numeroAdivinar = rand() % 100 + 1;

    // cout << "Ingresar un número aleatorio: ";
    // cin >> numeroIngresado;

    while (i <= numeroAdivinar){
        cout << "Ingresar un número aleatorio: ";
        cin >> numeroIngresado;
        intentos++;
        i++;
    }
    cout << "Adivinaste el número " << numeroIngresado << " luego de " << intentos << " intentos" <<endl;
}