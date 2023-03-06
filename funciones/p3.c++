#include <iostream>
#include <math.h>
using namespace std;

double calcula_potencia(double, double);
int main()
{
    double numero1, numero2;
    cout << "Introduzca la base";
    cin >> numero1;
    cout << "Introduzca el exponente";
    cin >> numero2;

    double resultado = calcula_potencia(numero1, numero2); 
    cout << "La potencia con base"<< numero1 << " y exponente" << numero2
         << " es " << resultado << ".\n";
}

double calcula_potencia(double num1, double num2)
{
    double potencia;
    potencia = pow(num1,num2);
    return potencia;
}