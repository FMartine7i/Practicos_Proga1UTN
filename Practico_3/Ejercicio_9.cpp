#include <iostream>
using namespace std;

int main(){
    unsigned int salario;

    cout << "Ingresar salario: ";
    cin >> salario;

    if(salario > 0 && salario <= 60000)
        salario *= 1.2;

    else if(salario > 60000 && salario <= 100000)
        salario *= 1.1;
    
    else if(salario > 100000 && salario <= 150000)
        salario *= 1.05;
    else
        salario *= 1.03;
        
    cout << "El salario incrementado es de: $" << salario << endl;
    return 0;
}