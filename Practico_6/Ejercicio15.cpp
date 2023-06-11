#include <iostream>
#include <string>
using namespace std;

void controlarTemp(float& temp);                                                                   //
void controlarIlum(int& iluminacion);                                                             //
void controlarRiego(bool& riego);                                                                  // Prototipos
void salirPrograma(bool& salir, int& opcion, float& temp, int& iluminacion, bool& riego);    //

int main(){
    int opcion;
    float temp = 20.0;
    int iluminacion;
    bool riego = false;
    bool salir = false;

    salirPrograma(salir, opcion, temp, iluminacion, riego);

    return 0;
}

void controlarTemp(float& temp){
    float nuevaTemp;

    cout << "Ingrese temperatura dentro del rango permitido: ";
    cin >> nuevaTemp;

    if(temp < 17.9 || temp > 24.5){
        cout << "Error. Temperatura fuera de rango \n" << endl;
    }
    else{
        temp = nuevaTemp;
        cout << "Nueva temperatura ajustada a: " << temp << "\n" << endl;
    }
}

void controlarIlum(int& iluminacion){
    int nuevoValorIlum;

    cout << "Ingrese la intensidad de la iluminación: " << endl;
    cin >> nuevoValorIlum;

    if(nuevoValorIlum < 0 || nuevoValorIlum > 100){
        cout << "Error. Valor fuera de rango\n" << endl;
    }
    else{
        iluminacion = nuevoValorIlum;
        cout << "Intensidad de la iluminación: " << iluminacion << "\n" << endl;
    }
}

void controlarRiego(bool& riego){
    string encender;

    cout << "Riego apagado. Escriba 'encender' si desea encenderlo." << endl;
    cin >> encender;
    if(encender == "encender"){
        riego = true;
        cout << "El riego ha sido encendido. \n" << endl;
    }
    else if(encender == "apagar"){
        riego = false;
        cout << "El riego ha sido apagado. \n" << endl;
    }
    else{
        cout << "Dato ingresado inválido. Escriba 'apagado' si desea apagarlo.\n" << endl;
    }
}

void salirPrograma(bool& salir, int& opcion, float& temp, int& iluminacion, bool& riego){

    do{
        cout << "------ Menú invernadero ------" << endl;
        cout << " 1. Controlar temperatura" << endl;
        cout << " 2. Controlar iluminación" << endl;
        cout << " 3. Controlar riego" << endl;
        cout << " 4. Salir " << endl;
        cout << "------------------------------" << endl;
        cout << " Elija una opción " << endl;

        cin >> opcion;

        switch(opcion){
            case 1:
                controlarTemp(temp);
                break;
            case 2:
                controlarIlum(iluminacion);
                break;
            case 3:
                controlarRiego(riego);
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                salir = true;
                break;
            default:
                cout << "Opción inválida." << endl;
        }

    }
    while(salir == false);
}