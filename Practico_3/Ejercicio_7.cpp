#include <iostream>
using namespace std;

int main(){
    int nota1, nota2, nota3;

    cout << "Ingrese tres notas con espacio: ";
    cin >> nota1 >> nota2 >> nota3;

    float promedio = (float)(nota1 + nota2 + nota3) / 3;

    if (promedio < 6) 
        cout << "Desaprobado.";
    else
        cout << "Aprobado.";

    return 0;
};