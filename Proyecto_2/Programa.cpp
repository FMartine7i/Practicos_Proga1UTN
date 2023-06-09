#include <iostream>
#include <ctime>
#include <cctype>
using namespace std;

const int n = 3;

void cargarMatriz();
void subMenu(int matriz[n][n]);
void mostrarValores(int matriz[n][n]);
void buscarValor(int matriz[n][n]);
void devolver(int matriz[n][n]);
void ordenar(int matriz[n][n]);
void determinante(int matriz[n][n]);

int main(){

    int opcion;
    bool salir = false;

    // menu principal con un bucle do-while que se cierra cuando la variable booleana 'salir' = true;
    do{
        cout << "======= Menú Matriz =======" << endl;
        cout << " 1. Cargar matriz " << endl;
        cout << " 0. Salir del programa " << endl;
        cout << "===========================\n" << endl;

        cin >> opcion;
        cout << "\n";

        if (opcion == 1){

               cargarMatriz(); // llamo a la función cargarMatriz, la cual tiene un segundo menú que me permite elegir más opciones una vez tenga cargada la matriz

        }
        else if (opcion == 0){
            cout << "Saliendo del programa ..." << endl;
            salir = true;
            return 0;
        }
        else{
            cout << " Opción inválida " << endl;
        }
    }
    while(salir == false);
}

void cargarMatriz(){    // función cargarMatriz
    srand(time(0));
    int matriz[n][n];
    char nuevaOpcion;

    // para el segundo menu creo otro bucle do-while que se detiene con la opción 'c', permitiendome volver al menú anterior
    do{
        cout << " ================= Menú Matriz ================= " << endl;
        cout << " a. Cargar con números aleatorios de 1 a 100 " << endl;
        cout << " b. Cargar de forma manual " << endl;
        cout << " c. Volver " << endl;
        cout << " ================================================\n " << endl;

        cin >> nuevaOpcion;
        cout << "\n";

        if( nuevaOpcion == 'a'){    // Si elijo 'a' la matriz se llena con números aleatorios del 1 al 100
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n; j++){
                    matriz[i][j] = rand() % 100 + 1;
                }
            }
            subMenu(matriz); // llamo a la funcion SubMenu() que me genera un último menú, una vez esté cargada la matriz
        }
        else if (nuevaOpcion == 'b'){   // si el usuairo elije 'b' la matriz se llena con los números que este elija
            for ( int i = 0; i < n; i++){
                for (int j = 0; j < n; j++){
                    cout << "Ingrese valor: ";
                    cin >> matriz[i][j];
                }
            }
            subMenu(matriz); // llamo a la funcion SubMenu() que me genera un último menú, una vez esté cargada la matriz
        }
        else if ( nuevaOpcion == 'c' ){
            break;
        }
        else{
            cout << "Opción inválida." << endl;
        }
    }
    while(true);    
}

void subMenu(int matriz[n][n]){
    // esta función contiene otro bucle do-while que muestra otro menú interactivo; este menú da a a elegir las opciones de mostrar valores, encontrar un valor específico, etc;
    int opcion;
    bool volver = false;
    do{
        cout << " \n====================================================================== " << endl;
        cout << " 1. Mostrar valores de la matriz " << endl;
        cout << " 2. Buscar valor específico " << endl;
        cout << " 3. Devolver valor máximo o mínimo de la matriz " << endl;
        cout << " 4. Ordenar los valores de la matriz de forma ascendente o descendente " << endl;
        cout << " 5. Calcular determinante " << endl;
        cout << " 6. Volver " << endl;
        cout << " ======================================================================\n " << endl;

        cin >> opcion;
        cout << "\n";

        // Utilizo switch para ejecutar las funciones según la opción que elija
        switch (opcion){ 
            case 1: 
                mostrarValores(matriz);
                break;
            case 2:
                buscarValor(matriz);
                break;
            case 3:
                devolver(matriz);
                break;
            case 4:
                ordenar(matriz);
            break;
            case 5:
                determinante(matriz);
                break;
            case 6:
                volver = true;
                break;
            default:
                cout << " Opción inválida " << endl;
                break;
        }
    }
    while(volver == false);
}

void mostrarValores(int matriz[n][n]){ 

    // imprimir matriz
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    } 

}

void buscarValor(int matriz[n][n]){
    int num, i, j;
    bool encontrado = false;

    cout << "Ingresar número: ";
    cin >> num;

    // Bucle para buscar el valor en la matriz
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if ( num == matriz[i][j]){ 
                encontrado = true;
                break;  // Salir del bucle externo si se encuentra el número
            }
        }
        if (encontrado){  
            break;  // Salir del bucle externo si se encuentra el número
        }
    }

    if(encontrado){
        cout << "El número " << num << " ha sido encontrado en la fila: " << i << ", columna: " << j << endl;
    }
    else{
        cout << "El número " << num << " no ha sido encontrado." << endl;
    }
}

void devolver(int matriz[n][n]){
    char opcion;

    // bucle do-while que se interrumpe cuando se elige la opción 'c'
    do {
        cout << " ========================================================== " << endl;
        cout << " a. Devolver valor máximo de la matriz " << endl;
        cout << " b. Devolver valor mínimo de la matriz " << endl;
        cout << " c. Volver " << endl;
        cout << " ==========================================================\n " << endl;

        cin >> opcion;
        cout << "\n";

        int valor = matriz[0][0]; // inicializo el valor en 0 para luego comparar con los valores de la matriz y determinar el menor o mayor valor, según corresponda

        switch (opcion) {
            case 'a':
                // inicio dos bucles for anidados para pasar por cada valor de la matriz y compararlos con la variable 'valor'
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (matriz[i][j] > valor) {
                            valor = matriz[i][j];
                        }
                    }
                }
                cout << "El valor máximo de la matriz es: " << valor << endl;
                break;
            case 'b':
                // inicio dos bucles for anidados para pasar por cada valor de la matriz y compararlos con la variable 'valor'
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (matriz[i][j] < valor) {
                            valor = matriz[i][j];
                        }
                    }
                }
                cout << "El valor mínimo de la matriz es: " << valor << endl;
                break;
            case 'c':
                break;
            default:
                cout << "Opción inválida..." << endl;
                break;
        }

        cout << endl;

    } while (opcion != 'c');
}

void ordenar(int matriz[n][n]){
    char opcion;

    //bucle do-while para generar otro menú que dé a elegir entre ordenar la matriz de forma ascendente o de forma descendente
    do{
        cout << " ========================================================== " << endl;
        cout << " a. Ordenar la matriz de forma ascendente " << endl;
        cout << " b. Ordenar la matriz de forma descedente " << endl;
        cout << " c. Volver " << endl;
        cout << " ==========================================================\n " << endl;

        cin >> opcion;
        cout << "\n";

        switch(opcion){
        case 'a':   // case 'a': ordena la matriz de forma ascendente con el método de burbujeo
            for (int k = 0; k < n * n - 1; k++){
                for (int i = 0; i < n; i++){
                    for (int j = 0; j < n; j++){
                        if (matriz[i][j] > matriz[i][j + 1]){
                            int temp = matriz[i][j];
                            matriz[i][j] = matriz[i][j + 1];
                            matriz[i][j + 1] = temp;                       
                        }
                    }
                }
            }        
            // imprimir matriz
            mostrarValores(matriz);     // llamo a la funcion mostrarValores() para imprimir la matriz
            break;
        // Si se elije 'd' o 'D' ordena la matriz de forma descendente con tres bucles for anidados usando el método de burbujeo para matriz
        case 'b':
            for (int k = 0; k < n * n - 1; k++) { // case 'b': ordena la matriz de forma descendente con el método de burbujeo
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n - 1; j++) {
                        if (matriz[i][j] < matriz[i][j + 1]) {
                            int temp = matriz[i][j];
                            matriz[i][j] = matriz[i][j + 1];
                            matriz[i][j + 1] = temp;
                        }
                    }
                }
            }
            // imprimir matriz
            mostrarValores(matriz); 
            break;
        case 'c':
            break;
        default:
            cout << "Opción inválida..." << endl;
            break;
        }
    }
    while(opcion != 'c');
}

void determinante(int matriz[n][n]){
    // obtener determinante con la regla de Sarrus
    int det = matriz[0][0] * matriz[1][1] * matriz[2][2] + matriz[0][1] * matriz[1][2] * matriz[2][0] + matriz[0][2] * matriz[1][0] * matriz[2][1]
            - matriz[0][2] * matriz[1][1] * matriz[2][0] - matriz[0][1] * matriz[1][0] * matriz[2][2] - matriz[0][0] * matriz[2][1] * matriz[1][2];
    cout << "El determinante es: " << det << endl;
}