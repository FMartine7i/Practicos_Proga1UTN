#include <iostream>
using namespace std;

int main(){
    int num; 

    cout << "Ingresasr un número entero positivo: " << endl;
    cin >> num;
    cout << endl;

    for(int i = 1; i <= num; i++){
        for (int j = 1; j <= num; j++){
            if (i == j){
                cout << i << " ";
            }
            else{
                cout << "0" << " ";
            }
        }
        cout << endl;
    }
}