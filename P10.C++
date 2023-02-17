#include <iostream>
using namespace std;
int main(){
    int n, num, menor15 = 0, mayor50 = 0, entre25y45 = 0;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;
for(int i=0;i<n;i++){
        cout<<"Ingrese el numero " << i+1 << ": ";
        cin >> num;
if(num<15){
            menor15++;
        } 
else if(num>50){
            mayor50++;
        } 
else if(num>=25&&num<=45){
            entre25y45++;
}
}
    cout<<"Cantidad de numeros menores a 15: "<<menor15<<endl;
    cout << "Cantidad de numeros mayores a 50: "<<mayor50<<endl;
    cout << "Cantidad de numeros entre 25 y 45: "<<entre25y45<<endl;
return 0;
}