#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num1, num2, mayor, menor;

    cout << "Ingresar dos números entre 1 y 10 con espacio: ";
    cin >> num1 >> num2;
    
    if(num1 >= 1 && num1 <= 10 && num2 >= 1 && num2 <= 10){
        if(num1 % 2 == 0 && num2 % 2 == 0){
            float division = (float)num1 / num2;
            cout << "Division: " << division << endl;
        }
        else{
            int mayor = max(num1, num2);
            int menor = min(num1, num2);
            int potencia= pow(mayor, menor);
            cout << "Potencia: " << potencia << endl;
        }
    }
    else{
        cout << "Error." << endl;
    }
    return 0;
}