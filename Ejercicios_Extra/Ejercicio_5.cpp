#include <iostream>
#include <string>
using namespace std;

int main(){
    string nombre;
    int anioNacimiento, mesNacimiento, diaNacimiento;

    cout << "Escribir nombre: ";
    getline(cin, nombre);

    cout << "Escribir fecha de nacimiento entre espacios de esta forma (dia mes año): ";
    cin >> diaNacimiento >> mesNacimiento >> anioNacimiento;

    int num_letras = nombre.length();

    if(num_letras > 12){
        int mes_viaje = (num_letras % 10) + (num_letras / 10);
        int dia_viaje = anioNacimiento / (mesNacimiento * diaNacimiento);

        if(dia_viaje > 31){
            dia_viaje = 3;
        }
    
    cout << "El usuario se irá de viaje el día " << dia_viaje << " del mes " << mes_viaje << "." << endl;
    }
    else
        cout << "No tengo instrucciones para cuando el nombre tiene menos de 12 letras." << endl;
    
    return 0;
}