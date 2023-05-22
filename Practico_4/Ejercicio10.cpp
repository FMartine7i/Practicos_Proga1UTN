#include <iostream>
using namespace std;

int main(){
    int lado, area;
    cout << "ingresar lado de un cuadrado: " << endl;
    cin >> lado;
    cout << "\n";

    for(int i = 0; i < lado; i++){
        for(int j = 0; j < lado; j ++){
            if ((i == 0 || i == lado - 1) || (j == 0 || j == lado - 1)){
                cout << "*\t";
            }
            else{
                cout << " \t";
            }
        }
        cout << "\n";
    }
    return 0; 
}