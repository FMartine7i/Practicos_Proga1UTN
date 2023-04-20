#include <iostream>
using namespace std;

int main(){
    int valorCompra, precioFinal;
    char membresia;

    cout << "Escriba el tipo de memebresía A, B o C y el valor de la compra con espacio: ";
    cin >> membresia >> valorCompra;

    if (membresia == 'A')
        precioFinal = valorCompra - valorCompra * 0.1;
    
    else if (membresia == 'B')
        precioFinal = valorCompra - valorCompra * 0.15;
    
    else if (membresia == 'B')
        precioFinal = valorCompra - valorCompra * 0.2;
    
    else{
        cout << "Solo puede ingresar caracteres A, B o C.";
        return 1; // salir del programa con código de error
    }

    cout << "El precio final es: $" << precioFinal << endl;
    return 0;
};