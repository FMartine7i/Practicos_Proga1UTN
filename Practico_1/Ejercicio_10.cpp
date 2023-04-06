#include <iostream>
#include <string>
using namespace std;

main(){
    string cambio, ciudad1, ciudad2;
    ciudad1 = "Mar del Plata";
    ciudad2 = "Bariloche";
    cambio = ciudad1;
    ciudad1 = ciudad2;
    ciudad2 = cambio;

    cout << "El primer destino es: " << ciudad1 << " y el segundo destino es: " << ciudad2 << endl;
}