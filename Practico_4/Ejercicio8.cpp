#include <iostream>
using namespace std;

int main(){
    int i = 2, num;
    bool esPrimo = true;

    cout << "ingresar un número: " << endl;
    cin >> num;

    while(i < num){
        if ( num % i == 0 ){
            esPrimo = false;
        break;
        }

        i++;
    }
    if ( esPrimo ){
        cout << num << " es primo." << endl;
    }
    else{
        cout << num << " no es primo." << endl;
    }
}