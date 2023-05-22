#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "ingrese un número: ";
    cin >> num;

    
    for(int i = 0; i <= 10; i++){
        cout << num << "*" << i << " = " << i * num << " " << endl;
    }

    return 0;
}