#include<iostream>

using namespace std;

int main(){

int vec[8],acu=0,prom=0;
for (int i = 0; i < 8; i++)
{
    cout<<"ingrese el numero :";cin>>vec[i];
    acu=acu+vec[i];
    prom =acu/8;


}
cout<<"el promedio de los numeros es "<<prom<<endl;

}