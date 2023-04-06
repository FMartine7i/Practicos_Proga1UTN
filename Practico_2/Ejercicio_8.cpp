#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, logaritmo_10, digito;

    cout << "Ingresá un número aleatorio." << endl;
    cin >> num;

    logaritmo_10 = log10(num);
    digito = trunc(logaritmo_10) + 1;

    cout << "El número ingresado tiene: " << digito << " cifras." << endl;

    return 0;
}