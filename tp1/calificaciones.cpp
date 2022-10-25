#include<iostream>

using namespace std;

int main(){
    cout<<"*************************\n";
    cout<<"*****               *****\n";
    cout<<"*****     NOTAS     *****\n";
    cout<<"*****               *****\n";
    cout<<"*************************\n";
    cout<<"\n\n";

    //DECLARACION
    double nota = 0;
    int cont =0,desaprobados = 0,aprobados = 0;
    
    //DESARROLLO
    while (cont<20)
    {
        cont++;
        cout<<"ingrese nota del alumno "<<cont<<": ";cin>>nota;

        if (nota>=7)
        {
            aprobados++;
        }else
        {
            desaprobados++;
        }
        
        
    }
    cout<<"el numero total de aprobados es= "<<aprobados<<endl;
    cout<<"el numero total de desaprobados es= "<<desaprobados<<endl;
 


}