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
Este programa pide al usuario que ingrese la longitud de los tres lados del triángulo. Luego, utiliza una estructura selectiva if-else para determinar si el triángulo es equilátero, isósceles o escaleno, y almacena el resultado en una variable tipoTriangulo. Finalmente, imprime el resultado en la consola.




