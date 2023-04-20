#include <iostream>
using namespace std;

int main(){
    char operador;
    float num1, num2;

    cout << "Ingrese un número, un operador y otro número, separados por espacio: ";
    cin >> num1 >> operador >> num2;

    switch(operador){
        case '+': 
            cout << num1 + num2;
            break;
        case '-': 
            cout << num1 - num2;
            break;
        case '*': 
            cout << num1 * num2;
            break;
        case '/': 
            cout << num1 / num2;
            break;
        default: 
            cout << "caracter no válido."<< endl;
    }
    return 0;
}