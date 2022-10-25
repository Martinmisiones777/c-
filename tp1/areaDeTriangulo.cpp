#include<iostream>

using namespace std;

int main(){
    cout<<"***************************\n";
    cout<<"******               ******\n";
    cout<<"****** AREA TRIANGULO *****\n";
    cout<<"******               ******\n";
    cout<<"***************************\n";
    cout<<"\n\n";
    
    //DECLARACION
    int resp;
    double altura = 0,base = 0,area = 0;
    
    //DESARROLLO
    cout<<"A continuacion ingrese los lados del triangulo \n";
    while (resp != 2)
    {
        cout<<"base :";cin>> base;cout<<endl;cout<<"altura :";cin>> altura;cout<<endl;
        area = (base*altura)/2;
        cout<<"el area del triangulo es = "<<area<<endl;


        cout<<"¿desea seguir calculando areas de triangulos?  1-si 2-no"<<endl;
        cout<<"respuesta";cin>> resp;
    }
    

}