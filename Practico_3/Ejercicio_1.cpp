#include <iostream>
using namespace std;

int main() {
  int num;

  cout << "Ingresá un número aleatorio: ";
  cin >> num;

  if (num % 2 == 0) 
    cout << "El numero ingresado es par.";
  else
    cout << "El numero ingresado es impar." << endl;

  return 0;
}