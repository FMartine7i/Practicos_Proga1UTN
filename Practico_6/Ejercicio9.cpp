#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;
    float altura;
    string ocupacion;
};

void imprimirPersona(Persona persona){
    cout << "Nombre: " << persona.nombre << endl;
    cout << "Edad: " << persona.edad << endl;
    cout << "Altura: " << persona.altura << endl;
    cout << "Ocupación: " << persona.ocupacion << endl;
}

int main(){
    Persona persona;

    persona.nombre = "Juan";
    persona.edad = 20;
    persona.altura = 1.8;
    persona.ocupacion = "Estudiante";

    imprimirPersona(persona);
}