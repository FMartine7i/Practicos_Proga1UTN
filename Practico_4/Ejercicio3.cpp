#include <iostream>
using namespace std;

int main(){
    int n, suma = 1, i = 1;

    cout << "ingrese un número natural: ";
    cin >> n;

    
    while ( i < n){
        suma+= i;
        i++;
    }

    cout << "La suma de los primeros " << n << " numeros naturales es: " << suma << endl;
    return 0;
}