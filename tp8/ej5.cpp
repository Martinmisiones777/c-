#include<iostream>
using namespace std;

int main(){

    double notaAlumnos[2][5],promNota[1][5];

    for (int i = 0; i < 5; i++)
    {
        cout<<"ingrese nota del alumno :"<<i<<endl;
        for (int j = 0; j < 2; j++)
        {
            cin>>notaAlumnos[i][j];
        }
        system("clear");
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"alumno :"<<i<<endl;
        for (int j = 0; j < 2; j++)
        {
            cout<<notaAlumnos[i][j]<<"  ";
        }
        cout<<endl;
    }  
return 0;  
}