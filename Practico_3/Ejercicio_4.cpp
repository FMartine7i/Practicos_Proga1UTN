#include <iostream>
using namespace std;

int main(){
    int precioZapato = 8000;
    int cantidadZapatos;
    double descuento, compra;
    

    cout << "Ingrese la cantidad de zapatos a comprar: ";
    cin >> cantidadZapatos;

    if(cantidadZapatos > 30)
       descuento = 0.4;
    else if(cantidadZapatos > 20)
       descuento = 0.2;
    else if(cantidadZapatos > 10)
       descuento = 0.1;
    else
       descuento = 0.0;

    compra = cantidadZapatos * precioZapato;
    int pagoTotal = compra - (compra * descuento);

    cout << "El pago total es: $" << pagoTotal << endl; 
    return 0;
}