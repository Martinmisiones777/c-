#include<iostream>

using namespace std;

int main(){
/*
1:corresponde a Docente de nivel inicial
2:corresponde a Profesorado en Filosofía
3:corresponde a Profesorado en educación física*/
int edad=-1,carrera=0,contA=0,contB=0,contC=0,contD=0,contE=0;
while (edad!=0)
{
    cout<<"Ingrese edad: "<<endl;cin>>edad;
    if (edad==0)break;
    cout<<"ingrese carrera\n 1:corresponde a Docente de nivel inicial\n 2:corresponde a Profesorado en Filosofía\n 3:corresponde a Profesorado en educación física\n";
    cin>>carrera;
    system("clear");
    
    

    if (21<=edad<=18 && carrera==3)
    {
        contA++;
    }else if (carrera==3)
    {
        contB==3;
    }else if (edad>21 && carrera==1)
    {
        contC++;
    }else if (carrera==2)
    {
        contD++;
    }else if (edad>30 && carrera==1)
    {
        contE++;
    }   
}
cout<<"jóvenes que tienen entre 18 años y 21 años y están \nestudiando el profesorado de educación física "<<contA<<endl;
cout<<"jóvenes que están estudiando profesorado en educación física "<<contB<<endl;
cout<<"jóvenes que son mayores a 21 años y están estudiando \nelprofesorado de nivel inicial "<<contC<<endl;
cout<<"jóvenes que están estudiando el profesorado de filosofía "<<contD<<endl;
cout<<"jóvenes son mayores a 30 y están estudiando el profesorado de nivel inicial "<<contE<<endl;


return 0;    
}