#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word[17];
    string respuesta[17];

    word[1] = {"Categoria"};
    word[2] = {"Habilidad"};
    word[3] = {"Habolidad oculta"};
    word[4] = {"Peso"};
    word[5] = {"Altura"};
    word[6] = {"GrupoDeHuevo"};
    word[7] = {"Sexo"};
    word[8] = {"Habitat"};
    word[9] = {"Color"};
    word[10] = {"Generacion"};
    word[11] = {"Velocidad"};
    word[12] = {"Fortaleza"};
    word[13] = {"Precision"};
    word[14] = {"Resistencia"};
    word[15] = {"Salto"};
    word[16] = {"Total"};
    word[17] = {"Media"};

    for (int i = 1; i < 18; i++) 
    {
    cout << "Introduce el/la " << word[i] << " de tu pokemon"<< endl;
    cin >> respuesta[i];
    }

    for (int i = 1; i < 18; i++) 
    {
    cout << "Tu pokemon tiene/es" << word[i] << "de"<< respuesta[i]<< endl;
    }

    return 0;
}
