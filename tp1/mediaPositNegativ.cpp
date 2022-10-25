#include<iostream>

using namespace std;

int main(){
    cout<<"*************************\n";
    cout<<"*****               *****\n";
    cout<<"***** VALOR MED P/N *****\n";
    cout<<"*****               *****\n";
    cout<<"*************************\n";
    cout<<"\n\n";
    
    int num = 1,cont = 0,acuP = 0,acuN = 0;
    int contP = 0;
    int contN = 0;
    double res = 0;
    
    cout<<"ingrese los numeros para sacar el valor medio \n";
    while (cont <10 )
    {
        cout<<"ingrese valor: ";cin>>num;
        if (num >0 )
        {
            acuP =  acuP+num;
            contP++;
        }
        else
        {
            acuN = acuN+num;
            contN++;
        }
        
        cont++;

    }
    cout<<"la media entre los valores positivos es = "<<acuP/(contP)<<endl;
    cout<<"la media entre los valores negativos es = "<<acuN/(contN)<<endl;
    
}