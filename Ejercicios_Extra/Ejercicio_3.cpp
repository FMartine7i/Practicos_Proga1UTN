#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, cifra;

    cout << "Ingresar un número entero: ";
    cin >> num;

    if(num % 2 == 0){
        cifra = (int)log10(num) + 1; // con log10 de un numero obtengo el logaritmo en base 10 de un número, es decir que, por ejemplo si 10 en base 10 es 1 y 100 en base 10 es 2, 
                                      //cualquier número entre estos dos estará en un rango entre 1 y 2, por lo tanto, si sumo 1, obtendré el número de cifras.
        cout << "El número es par y tiene " << cifra << " cifras." << endl;
    }
    else{
        cifra = (int)log10(num) + 1;
        int primeraCifra = (int)(num / pow(10, cifra - 1)); // para obtener la primera cifra, debo dividir de forma entera por 10 elvado la cantidad de cifras del numero - 1
        cout << "El número es impar y su primera cifra es " << primeraCifra << endl;
    }
}