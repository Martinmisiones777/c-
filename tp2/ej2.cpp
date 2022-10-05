#include<iostream>
using namespace std;
int main()
{
    int n,mayor,cont=1;
    n = 1;
    mayor = 0;
   
    while (n != 0)
    {
        cout<< "Ingresa un importe para participar: ";
        cin>> n;
        if (n > mayor){
            mayor = n;
            cont++;
        }
    }
    cout<< "El ganador"<<cont<<" ingreso : $"<<mayor<<endl;
    return 0;
}