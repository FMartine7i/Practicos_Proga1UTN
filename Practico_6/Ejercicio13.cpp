#include <iostream>
#include <string>
using namespace std;

struct Libro{
    string titulo;
    string autor;
    int anioPublicacion;
    int arreglo[3];
};

void agregarLibro(Libro& libro){
    cout << "Ingrese título:\n";
    cin >> libro.titulo;
    cout << "Ingrese autor: \n";
    cin >> libro.autor;
    cout << "Ingrese año de publicación: \n";
    cin >> libro.anioPublicacion;

}

void llenarLista(Libro arreglo[], int longitud, int& cantidad){
    char opcion = 'n';

    do{
        if(cantidad < longitud){
            Libro nuevo;
            agregarLibro(nuevo);
            arreglo[cantidad] = nuevo;
            cantidad++;
            cout << "Ingrese 's' o 'n'" << endl;
        }
        else{
            cout << "Lista de libros llena" << endl;
            opcion = 'n';
        }
    }
    while(opcion == 'n');
}

void buscarLibroPorAutor(Libro arreglo[], int cantidad){
    string nAutor;

    cout << "Ingrese nombre del autor: " << endl;
    cin >> nAutor;

    string librosCoincidentes[100]; // Arreglo para almacenar los títulos de los libros coincidentes
    int cantCoincidentes = 0; // Comienzo del contador

    // Recorrer el arreglo de libros
    for(int i = 0; i < cantidad; i++){
        // Verificar si el autor del libro coincide con el autor dado
        if(arreglo[i].autor == nAutor) {
            librosCoincidentes[cantCoincidentes] = arreglo[i].titulo;
            cantCoincidentes++;
        }
    }

    if(cantCoincidentes == 0) {
        cout << "El autor no se encontró" << endl;
    }
    else{
        // Mostrar la lista de libros coincidentes
        cout << "Libros encontrados del autor " << nAutor << ":" << endl;
        for(int i = 0; i < cantCoincidentes; i++) {
            cout << librosCoincidentes[i] << endl;
        }
    }  
}

void mostrarLibros(Libro arreglo[], int cantidad){
    for(int i = 0; i < cantidad; i++){
        cout << "Titulo: " << arreglo[i].titulo << endl;
        cout << "Autor: " << arreglo[i].autor << endl;
        cout << "Año de publicación: " << arreglo[i].anioPublicacion << endl;
    }
}

int main(){
    int maxLibros = 100;
    Libro lista[maxLibros];
    int cantidad = 0;  //Para recorrer hasta los libros que tengo y no si o si los 100 lugares
    llenarLista(lista, maxLibros, cantidad);
    mostrarLibros(lista, cantidad);
    buscarLibroPorAutor(lista, cantidad);

    return 0;
}