#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string>
using namespace std;


 
class persona{
    private:
    string nombre; int edad; 
    public:
    /******MÉTODOS*/
    void leer();
    void felicitacion();
    persona(int,string);
    
};
persona::persona(int _edad, string _nombre){
    edad=_edad;
    nombre=_nombre;
}
 void persona::leer(){
    cout<<"Soy "<<nombre>>"estoy leyendo un libro en blanco";
 }
void persona::felicitacion(){
    cout<<"Soy"<<nombre>>"es mi cumple y tengo "<<edad<<" años";
}
