#include <iostream>
using namespace std;

int main(){
    int cantidad, i = 0, num;
    float media, suma = 0;

    cout << "ingresar cantidad de números a introducir: ";
    cin >> cantidad;

    do{
        cout << "ingrese un número: ";
        cin >> num;
        suma += num;
        i++;
    }
    while (i < cantidad);
    media = suma / cantidad;

    cout << "La media de la cantidad de números ingresados es: " << media << endl;
    return 0;
}