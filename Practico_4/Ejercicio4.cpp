#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "ingrese un número: ";
    cin >> num;
    int i;

    cout << "Los divisores de " << num << " son: ";
    
    for(i = 1; i <= num; i++){

        if(num % i == 0){
            cout << i << " ";
        }
    }

    return 0;
}