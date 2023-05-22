#include <iostream>
using namespace std;

int main(){
    int num, aux, producto = 1;

    cout << "ingresar un número para obtener factorial: ";
    cin >> num;

    cout << "El factorial de " << num << " es ";
    for (int i = 1; i <= num; i++) {
        producto *= i;
    }
    cout << producto << endl;
}