#include <iostream>
using namespace std;

int main(){

    int dia, mes;
    cout << "Ingresar una fecha: día y mes con espacio: ";
    cin >> dia >> mes;

    switch(mes) {
        case 1: 
            cout << dia;
            break;
        case 2: 
            cout << dia + 31;
            break;
        case 3: 
            cout << dia + 59;
            break;
        case 4: 
            cout << dia + 90;
            break;
        case 5: 
            cout << dia + 120;
            break;
        case 6: 
            cout << dia + 151;
            break;
        case 7: 
            cout << dia + 181;
            break;
        case 8: 
            cout << dia + 212;
            break;
        case 9:
            cout << dia + 243;
            break;
        case 10: 
            cout << dia + 273;
            break;
        case 11: 
            cout << dia + 304;
            break;
        case 12: 
            cout << dia + 334;
            break;
        default: 
            cout << "Mes inválido." << endl;
    }
};