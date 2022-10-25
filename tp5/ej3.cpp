#include<iostream>

using namespace std;

int main(){

int primer[15],segundo[15],acu1=0,acu2=0;
float prom1=0,prom2=0;
for (int i = 0; i < 15; i++)
{
    cout<<"ingrese lo facturado en el primer semestre"<<endl;
    cin>>primer[i];
    acu1=acu1+primer[i];
    cout<<"ingrese lo facturado en el segundo semestre"<<endl;
    cin>>segundo[i];
    acu2=acu2+segundo[i];
    prom1=acu1/15;
    prom2=acu2/15;
}
cout<<"el promedio del primer semestre es :"<<prom1<<endl;
cout<<"el promedio del segundo semestre es :"<<prom2<<endl;


}