#include<iostream>

using namespace std;

int main(){
    cout<<"*************************\n";
    cout<<"*****               *****\n";
    cout<<"*****  VALOR MEDIO  *****\n";
    cout<<"*****               *****\n";
    cout<<"*************************\n";
    cout<<"\n\n";
    int num = 1;
    int cont = 0;
    int acu = 0;
    double res = 0;
    cout<<"ingrese los numeros para sacar el valor medio \n al finalizar precione 0 \n";
    while (num != 0)
    {
        cout<<"ingrese valor: ";cin>>num;
        acu = acu + num;
        cont++;

    }
    cout<<"la media entre los valores ingresados es = "<<acu/(cont-1)<<endl;
    
}