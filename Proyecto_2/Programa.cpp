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

    do{
        cout << "======= Menú Matriz =======" << endl;
        cout << " 1. Cargar matriz " << endl;
        cout << " 0. Salir del programa " << endl;
        cout << "===========================\n" << endl;

        cin >> opcion;
        cout << "\n";

        if (opcion == 1){

               cargarMatriz(); 

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
    return 0;
}

void cargarMatriz(){
    srand(time(0));
    int matriz[n][n];
    char nuevaOpcion;

    do{
        cout << " ================= Menú Matriz ================= " << endl;
        cout << " a. Cargar con números aleatorios de 1 a 100 " << endl;
        cout << " b. Cargar de forma manual " << endl;
        cout << " c. Volver " << endl;
        cout << " ================================================\n " << endl;

        cin >> nuevaOpcion;
        cout << "\n";

        if( nuevaOpcion == 'a'){
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n; j++){
                    matriz[i][j] = rand() % 100 + 1;
                }
            }
            subMenu(matriz);
        }
        else if (nuevaOpcion == 'b'){
            for ( int i = 0; i < n; i++){
                for (int j = 0; j < n; j++){
                    cout << "Ingrese valor: ";
                    cin >> matriz[i][j];
                }
            }
            subMenu(matriz);
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
    int opcion;
    bool volver = false;
    do{
        cout << " ===================================================================== " << endl;
        cout << " 1. Mostrar valores de la matriz " << endl;
        cout << " 2. Buscar valor específico " << endl;
        cout << " 3. Devolver valor máximo o mínimo de la matriz " << endl;
        cout << " 4. Ordenar los valores de la matriz de forma ascendente o descendente " << endl;
        cout << " 5. Calcular determinante " << endl;
        cout << " 6. Volver " << endl;
        cout << " =====================================================================\n " << endl;

        cin >> opcion;
        cout << "\n";

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

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    } 

}

void buscarValor(int matriz[n][n]){
    int num;
    bool encontrado = false;

    cout << "Ingresar número: ";
    cin >> num;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ( num == matriz[i][j]){
                encontrado = true;
                cout << "El número " << num << " ha sido encontrado en la fila: " << i << ", columna: " << j << endl;
                break;
            }
        }
        if (encontrado){
            break;
        }
    }

    if (!encontrado){
        cout << "No se ha encontrado el número ingresado en la matriz." << endl;
    }
}

void devolver(int matriz[n][n]){
    char opcion;

    cout << " Ingrese 'M' si desea obtener el valor máximo de la matriz o ingrese 'm' si desea obtener el valor máximo. " << endl;
    cin >> opcion;
    if ( opcion == 'M'){
        int maximo = matriz[0][0]; // inicializo el valor máximo en 0 y luego comparo con los demás valores hasta llegar al más grande

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (matriz[i][j] > maximo){
                    maximo = matriz[i][j];
                    cout << "El valor máximo de la matriz es: " << maximo << endl;
                }
            }
        }
    }
    else if ( opcion == 'm'){
        int minimo = matriz[0][0];

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (matriz[i][j] <= minimo){
                    minimo = matriz[i][j];
                    cout << "El valor mínimo de la matriz es: " << minimo << endl;
                }
            }
        }
    }
    else {
        cout << "Opcion inválida. Ingrese el caracter 'M' si desea obtener el valor máximo de la matriz o ingrese 'm' si desea obtener el valor máximo." << endl;
    }
}

void ordenar(int matriz[n][n]){
    char opcion;

    cout << "Ingrese los caracteres 'A' o 'a', si desea ordenar la matriz de forma ascendente o ingrese los caracteres 'D' o 'd' si desea ordenar la matriz de forma descendente." << endl;
    cin >> opcion;

    if (opcion == 'a' || opcion == 'A'){
        for (int k = 0; k < n * n - 1; k++){
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n - 1; j++){
                    if (matriz[i][j] > matriz[i][j + 1]){
                        int temp = matriz[i][j];
                        matriz[i][j] = matriz[i][j + 1];
                        matriz[i][j + 1] = temp;                       
                    }
                }
            }
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if (opcion == 'd' || opcion == 'D'){
        for (int k = 0; k < n * n - 1; k++){
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n - 1; j++){
                    if (matriz[i][j] < matriz[i][j + 1]){
                        int temp = matriz[i][j];
                        matriz[i][j] = matriz[i][j + 1];
                        matriz[i][j + 1] = temp;                       
                    }
                }
            }
        }
       for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        } 
    }
    else {
        cout << "Opcion inválida. Ingrese los caracteres 'A' o 'a', si desea ordenar la matriz de forma ascendente o ingrese los caracteres 'D' o 'd' si desea ordenar la matriz de forma descendente." << endl;
    }
}

void determinante(int matriz[n][n]){
    int det = matriz[0][0] * matriz[1][1] * matriz[2][2] + matriz[0][1] * matriz[1][2] * matriz[2][0] + matriz[0][2] * matriz[1][0]* matriz[2][1] - (matriz[0][2] * matriz[1][1] * matriz[2][0] + matriz[0][1] * matriz[1][0]* matriz[2][2] + matriz[0][0] * matriz[2][1] * matriz[1][2]);
    cout << "El determinante es: " << det << endl;
}