#include <iostream>
using namespace std;

int main(){
    char letra;

    cout << "Ingrese una letra: ";
    cin >> letra;

    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Es una vocal" << endl;
            break;
        default:
            cout << "No es una vocal" << endl;
            break;
    }

    return 0;
}