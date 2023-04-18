#include <iostream>
using namespace std;

int main() {
  int a, b, c;

  cout << "Ingresá tres numeros separados por espacio: ";
  cin >> a >> b >> c;

  int mayor = a;
  if (b > mayor) {
    mayor = b;
  }
  if (c > mayor) {
    mayor = c;
  }

  cout << "El numero mayor es: " << mayor << endl;

  return 0;
}