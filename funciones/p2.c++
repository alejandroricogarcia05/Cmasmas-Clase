#include <iostream>
using namespace std;

double calcula_media(double, double);
int main()
{
    double numero1, numero2;
    cout << "Introduzca el primer número: ";
    cin >> numero1;
    cout << "Introduzca el segundo número: ";
    cin >> numero2;

    double resultado = calcula_media(numero1, numero2); 
    cout << "La media de "<< numero1 << " y " << numero2
         << " es " << resultado << ".\n";
}

double calcula_media(double num1, double num2)
{
    double media;
    media = (num1+num2)/2.;
    return media;
}