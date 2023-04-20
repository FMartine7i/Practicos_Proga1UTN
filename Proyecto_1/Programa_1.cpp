#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int dia, mes;
    float invitados;
    string respuesta;

    cout << "Ingresar día y mes de nacimiento entre espacios: ";
    cin >> dia >> mes;
    cout << "Día: " << dia << endl;
    cout << "Mes: " << mes << endl;

    if(mes == 1 && dia >= 21 || mes == 2 && dia <= 19)
        cout << "El signo del zodíaco es: Acuario" << endl;
    
    else if (mes == 2 && dia >= 20 || mes == 3 && dia <= 20)
        cout << "El signo del zodíaco es: Piscis" << endl;

    else if (mes == 3 && dia >= 21 || mes == 4 && dia <= 19)
        cout << "El signo del zodíaco es: Aries" << endl; 

    else if (mes == 4 && dia >= 20 || mes == 5 && dia <= 20)
        cout << "El signo del zodíaco es: Tauro" << endl;  

    else if (mes == 5 && dia >= 21 || mes == 6 && dia <= 21)
        cout << "El signo del zodíaco es: Géminis" << endl;

    else if (mes == 6 && dia >= 22 || mes == 7 && dia <= 22)
        cout << "El signo del zodíaco es: Cáncer" << endl;

    else if (mes == 7 && dia >= 23 || mes == 8 && dia <= 23)
        cout << "El signo del zodíaco es: Leo" << endl;

    else if (mes == 8 && dia >= 24 || mes == 9 && dia <= 22)
        cout << "El signo del zodíaco es: Virgo" << endl;
    
    else if (mes == 9 && dia >= 23 || mes == 10 && dia <= 22)
        cout << "El signo del zodíaco es: Libra" << endl;

    else if (mes == 10 && dia >= 23 || mes == 11 && dia <= 22)
        cout << "El signo del zodíaco es: Escorpio" << endl;

    else if (mes == 11 && dia >= 23 || mes == 12 && dia <= 21)
        cout << "El signo del zodíaco es: Sagitario" << endl;

    else if (mes == 12 && dia >= 22 || mes == 1 && dia <= 20)
        cout << "El signo del zodíaco es: Capricornio" << endl;

    else
        cout << "Fecha de nacimiento inválida." << endl;

    
    cout << "¿Te gusta festejar tu cumpleaños?" << endl;
    cin >> respuesta;

    if (respuesta == "Si")
        cout << "¡Qué bueno!" << endl;
    
    else if (respuesta == "No")
        cout << "Qué lástima." << endl;
    
    else{
        cout << "- Error. Vuelva a intentar, solo se admiten los strings 'Si' y 'No'." << endl;
        cin.sync();
    }
        
    cout << "Ingresar cantidad de invitados: ";
    cin >> invitados;

    float aux1 = pow(invitados, 4);
    float aux2 = sqrt(aux1); 
    int total_invitados = round(aux2);

    cout << "Tus invitados ^ 4, radicando y redondeando el valor, son: " << total_invitados << endl;
    return 0;
}