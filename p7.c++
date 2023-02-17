#include <iostream>
using namespace std;

int main() {
   const int NUM_DIAS = 30;
   double temperaturas[NUM_DIAS], precipitaciones[NUM_DIAS], vientos[NUM_DIAS];
   double media_temp = 0, media_precip = 0, media_viento = 0;

   // Pedir al usuario que ingrese las temperaturas, precipitaciones y vientos de cada día del mes
   for(int i = 0; i < NUM_DIAS; i++) {
      cout << "Ingrese la temperatura del día " << i+1 << ": ";
      cin >> temperaturas[i];

      cout << "Ingrese la cantidad de precipitaciones del día " << i+1 << ": ";
      cin >> precipitaciones[i];

      cout << "Ingrese la velocidad del viento del día " << i+1 << ": ";
      cin >> vientos[i];
   }

   // Calcular la media de temperaturas, precipitaciones y vientos
   for(int i = 0; i < NUM_DIAS; i++) {
      media_temp += temperaturas[i];
      media_precip += precipitaciones[i];
      media_viento += vientos[i];
   }

   media_temp /= NUM_DIAS;
   media_precip /= NUM_DIAS;
   media_viento /= NUM_DIAS;

   // Mostrar los resultados
   cout << "La media de temperaturas del último mes es: " << media_temp << endl;
   cout << "La media de precipitaciones del último mes es: " << media_precip << endl;
   cout << "La media de vientos del último mes es: " << media_viento << endl;

   return 0;
}