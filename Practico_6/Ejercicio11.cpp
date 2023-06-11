#include <iostream>
#include <string>
using namespace std;

void intercambiar(string& str1, string& str2){
    string temp = str1;
    str1 = str2;
    str2 = temp;
}

int main(){
    string str1 = "Hola";
    string str2 = "Mundo";

    cout << "Antes de intercambiar: " << endl;
    cout << "Texto 1: " << str1 << endl;
    cout << "Texto 2: " << str2 << endl;
    cout << endl;
    
    intercambiar(str1, str2);

    cout << "Intercambiar strings: " << endl;
    cout << "Texto 1: " << str1 << endl;
    cout << "Texto 2: " << str2 << endl;

    return 0;
}