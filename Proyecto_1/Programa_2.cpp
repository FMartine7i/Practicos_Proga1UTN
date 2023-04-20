#include <iostream>
using namespace std;

int main(){
    int dia, mes;

    cout << "Ingresar día y mes de nacimiento entre espacios: ";
    cin >> dia >> mes;
    cout << "Día: " << dia << endl;
    cout << "Mes: " << mes << endl;

    switch(mes){
        case 1:
            if (dia >= 21)
                cout << "El signo del zodíaco es: Acuario" << endl;
            else
                cout << "El signo del zodíaco es: Capricornio" << endl;
        break;
        case 2:
            if (dia >= 20)
                cout << "El signo del zodíaco es: Piscis" << endl;
            else
                cout << "El signo del zodíaco es: Acuario" << endl;
        break;
        case 3:
            if (dia >= 21)
                cout << "El signo del zodíaco es: Aries" << endl;
            else
                cout << "El signo del zodíaco es: Piscis" << endl;
        break;
        case 4:
            if (dia >= 20)
                cout << "El signo del zodíaco es: Tauro" << endl;
            else
                cout << "El signo del zodíaco es: Aries" << endl;
        break;
        case 5:
            if (dia >= 21)
                cout << "El signo del zodíaco es: Géminis" << endl;
            else
                cout << "El signo del zodíaco es: Tauro" << endl;
        break;
        case 6:
            if (dia >= 22)
                cout << "El signo del zodíaco es: Cáncer" << endl;
            else
                cout << "El signo del zodíaco es: Géminis" << endl;
        break;
        case 7:
            if (dia >= 23)
                cout << "El signo del zodíaco es: Leo" << endl;
            else
                cout << "El signo del zodíaco es: Cáncer" << endl;
        break;
        case 8:
            if (dia >= 24)
                cout << "El signo del zodíaco es: Virgo" << endl;
            else
                cout << "El signo del zodíaco es: Leo" << endl;
        break;
        case 9:
            if (dia >= 23)
                cout << "El signo del zodíaco es: Libra" << endl;
            else
                cout << "El signo del zodíaco es: Virgo" << endl;
        break;
        case 10:
            if (dia >= 23)
                cout << "El signo del zodíaco es: Escorpio" << endl;
            else
                cout << "El signo del zodíaco es: Libra" << endl;
        break;
        case 11:
            if (dia >= 23)
                cout << "El signo del zodíaco es: Sagitario" << endl;
            else
                cout << "El signo del zodíaco es: Escorpio" << endl;
        break;
        case 12:
            if (dia >= 22)
                cout << "El signo del zodíaco es: Capricornio" << endl;
            else
                cout << "El signo del zodíaco es: Sagitario" << endl;
        break;
        default:
            cout << "Mes inválido." << endl;
    }
    return 0;
}