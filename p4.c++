#include <iostream>
#include <string>

using namespace std;

int main() 
{
  int a, b, c, d, e, f;
  float resultado;

  cout << "Ingrese el valor de a: ";
  cin >> a;
  cout << "Ingrese el valor de b: ";
  cin >> b;
  cout << "Ingrese el valor de c: ";
  cin >> c;
  cout << "Ingrese el valor de d: ";
  cin >> d;
  cout << "Ingrese el valor de e: ";
  cin >> e;
  cout << "Ingrese el valor de f: ";
  cin >> f;

  resultado = (a + (b / (float)c)) / (d + (e / (float)f));

  cout << "El resultado de f(x) es: " << resultado << std::endl;

  
  return 0;
}
