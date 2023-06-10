#include <iostream>
#include <string>
using namespace std;

int main(){

int opcion, ilum, regIluminacion;
float temperatura, nuevaTemp;
bool riego = false, salir = false;

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
                cout << "Ingrese temperatura deseada: ";
                cin >> nuevaTemp;
                if(temperatura < 17.9 || temperatura > 24.5){
                    cout << "La temperatura elegida no se encuentra en el rango permitido." << endl;
                }
                else{
                    temperatura = nuevaTemp;
                    cout << "Temperatura ajustada correctamente." << endl;
                }
            break;
            case 2: 
                cout << "Ingrese la intensidad de iluminación deseada.";
                cin >> regIluminacion;
                if(ilum < 0 || ilum > 100){
                    cout << "Ingrese un número permitido en el rango." << endl;
                }
                else{
                    ilum = regIluminacion;
                    cout << "La intesidad de iluminación ha sido ajustada correctamente." << endl;
                }
            break;
            case 3:
                if(riego == false){
                    string encender;
                    cout << "Riego apagado. Escriba 'encender' si desea encenderlo." << endl;
                    cin >> encender;
                    if(encender == "encender"){
                        riego == true;
                        cout << "El riego ha sido encendido." << endl;
                    }
                    else{
                        cout << "Dato ingresado inválido. Escriba 'encender' si desea encenderlo." << endl;
                    }
                }
                else{
                    string apagar;
                    cout << "Riego apagado. Escriba 'encender' si desea encenderlo." << endl;
                    cin >> apagar;
                    if(apagar == "apagar"){
                        riego == false;
                        cout << "El riego ha sido apagado." << endl;
                    }
                    else{
                        cout << "Dato ingresado inválido. Escriba 'apagado' si desea apagarlo." << endl;
                    }
                }
            break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                salir = true;
                return 0;
            break;
            default:
                cout << "Opción inválida." << endl;
        }
    }
    while(salir == false);
    return 0;
}