#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int numero = 0;
    int sumatorio = 0;
    for(int i=0; i<201; i++) 
        {                                                                                                                                                                                       
            if(i<200)
            {
                if(i%2==0)
                sumatorio+= 0 + i;
                i++;
            }
            else
            {
                cout<<sumatorio;
            }
        }
    return 0;
 
  
