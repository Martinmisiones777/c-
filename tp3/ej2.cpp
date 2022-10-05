#include<iostream>

using namespace std;

int main(){
/*
contA) ¿cuantos jóvenes tienen hasta 18 años?
contB) ¿cuantos jóvenes son mayores a 18 años y menores a 21 años ?
contC) Y ¿cuantos jóvenes son mayores a 21 años?
contD) ¿Cuantos jóvenes no estudian y son menores a 18 años?
contE) ¿Cuantos jóvenes estudian y son mayores a 21?
*/
int edad=0,res=0,cont=0,contA=0,contB=0,contC=0,contD=0,contE=0;

while (cont<5)
{
    cout<<"ingrese edad del alumno: "<<cont+1<<"(  ";cin>>edad;
    cout<<"¿estudia? \n *1 SI \n *2 NO\n";cin>>res;
    system("clear");

    if (res==2 && edad<18)
    {
        contD++;
    }
    else if (res==1 && edad>21)
    {
        contE++;
    }else if (edad>18 && edad <21)
    {
        contB++;
    }else if (edad>21)
    {
        contC++;
    }else if (edad<=18)
    {
        contA++;
    }
    cont++;
}
cout<<"jóvenes hasta 18 años: "<<contA<<endl;
cout<<"jóvenes son mayores a 18 años y menores a 21 años: "<<contB<<endl;
cout<<"jóvenes son mayores a 21 años: "<<contC<<endl;
cout<<"jóvenes no estudian y son menores a 18 años: "<<contD<<endl;
cout<<"jóvenes estudian y son mayores a 21: "<<contE<<endl;
return 0;    
}