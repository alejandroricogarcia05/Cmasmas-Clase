#include <iostream>
#include <string>

using namespace std;

int main() {
  int lado1, lado2, lado3;
  string tipoTriangulo;

  cout << "Ingrese la longitud del lado 1: ";
  cin >> lado1;
  cout << "Ingrese la longitud del lado 2: ";
  cin >> lado2;
  cout << "Ingrese la longitud del lado 3: ";
  cin >> lado3;

  if (lado1 == lado2 && lado2 == lado3) {
    tipoTriangulo = "equilátero";
  } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
    tipoTriangulo = "isósceles";
  } else {
    tipoTriangulo = "escaleno";
  }

  cout << "El triángulo es " << tipoTriangulo << endl;

  return 0;
}





