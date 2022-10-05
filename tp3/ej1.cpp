#include<iostream>

using namespace std;

int main(){

int cont=0,cantidad=0,contArt=0;
double subTot=0,acuTot=0;
while (cont <=31)
{
    cout<<"Ingrese la cantidad de articulos del dia "<<cont+1<<": ";cin>>cantidad;
    contArt=contArt+cantidad;
    cout<<"Ingrese sub total recaudado en el dia "<<cont+1<<": ";cin>>subTot;
    acuTot=acuTot+subTot;
    system("clear");
    cont++;
}
cout<<"Cantidad de articulos = "<<contArt<<endl;
cout<<"total recaudado en el mes = "<<acuTot<<endl;


return 0;    
}