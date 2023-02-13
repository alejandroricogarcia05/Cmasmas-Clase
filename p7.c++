#include <iostream>
#include <string>

using namespace std;

int main() {
    float mediaprecipiatciones,mediatemperatura,mediaviento;
    float nprecipitaciones,ntemperatura,nviento;
    float temperaturas[]={8,9,8,7,6,7,6,5.5,11,9,8,8.5,7,6,6.5,7,5,4.5,5,5.5,6,7,5,4,3.5,3,4,3,3.5,3.5};
    float velocidades[]={5,6,6,7,6,7,9,11,13,5,12,10,8,6,6.5,7,6,7,9,15,21,28,33,31,15,18,14,12,16,15};
    float precipitaciones[]={0,0.1,0.5,0.6,1.1,1.5,1.7};
    int respuesta;

    int tamañotemperaura = sizeof(temperaturas) / sizeof(temperaturas[0]);
    int tamaño= sizeof(temperaturas) / sizeof(temperaturas[0]);
    int tamañotemperaura = sizeof(temperaturas) / sizeof(temperaturas[0]);

    nprecipitaciones = sizeof(temperaturas);
    ntemperatura = sizeof(velocidades);
    nviento = sizeof(precipitaciones);

    mediatemperatura = temperaturas/ntemperatura;
    mediaprecipiatciones = precipitaciones/nprecipitaciones;
    mediaviento = velocidades/nvelocidades;

    cout <<"¿Que media quieres conocer?. Introduce un 1 para precipitaciones, un 2 para el viento y un 3 para la velocidad" <<endl;
    cin >> respuesta;

    if respuesta == 1;
        cout <<"La media de precipitaciones ha sido de"<<mediaprecipiatciones<< endl;
    if respuesta == 2;
        cout <<"La media del viento ha sido de"<<mediaviento<< endl;
    if respuesta == 3;
         cout <<"La media del viento ha sido de"<<mediaviento<< endl;
    
    return 0;
}