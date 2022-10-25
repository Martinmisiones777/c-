#include<iostream>

using namespace std;

int main(){
    cout<<"*************************\n";
    cout<<"*****               *****\n";
    cout<<"*****     NOTAS     *****\n";
    cout<<"*****               *****\n";
    cout<<"*************************\n";
    cout<<"\n\n";


    double nota = 0;
    int cont =0,notables = 0;

    while (cont<15)
    {
        cont++;
        cout<<"ingrese nota del alumno "<<cont<<": ";cin>>nota;

        if (nota>=7 && nota<9)
        {
            notables++;
        }
       
        
    }
    cout<<"el numero total de promocionados son = "<<notables<<endl;
    
 


}