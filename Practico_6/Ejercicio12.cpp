#include <iostream>
#include <string>
using namespace std;

void quitarVocales(string& str){
    string resultado;

    for(int i = 0; i < str.length(); i++){
        char vocal = str[i];
        switch(vocal){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                continue;   // ignora la vocal
            default:
                resultado += vocal;
        }
    }
    str = resultado;
    cout << str << endl;
}

int main(){
    string str;

    cout << "Ingrese una cadena..." << endl;
    cin >> str;

    quitarVocales(str);
    return 0;
}