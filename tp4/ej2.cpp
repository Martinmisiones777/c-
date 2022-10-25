#include<iostream>

using namespace std;

int main(){
int edad=0,acuEdad=0;
double promEdad=0;
for (int i = 0; i < 23; i++)
{
    cout<<"ingrese su edad: ";cin>>edad;
    acuEdad+=edad;
}
promEdad=acuEdad/23;
cout<<"el promedio de edades es: "<<promEdad<<endl;


return 0;    
}