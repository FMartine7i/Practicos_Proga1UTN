#include <iostream>
using namespace std;

int suma(int num1, int num2) {
    return num1 + num2;
}

int main(){
    
    int num1, num2;

    cout << "Ingrese un número entero: ";
    cin >> num1;
    cout << "Ingrese un segundo número entero: ";
    cin >> num2;

    int resultado = suma(num1, num2);
    cout << resultado << endl;
    
    return 0;
}
