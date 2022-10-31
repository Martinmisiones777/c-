#include<iostream>
#include<string.h>
#include<iomanip>


using namespace std;

int main(){

    int matSorteo[3][3],cont=0,num=0;
    string res="s";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cont++;
            matSorteo[i][j]=cont;
            system("clear");
        }
        
    }

    while (res=="s" || res=="S")
    {
        cout<<"ingrese numero vendido  :";cin>>num;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++)
            {
                if (num==matSorteo[i][j])
                {
                    matSorteo[i][j]=0;
                }
                
            }
        
        }
        cout<<"presione s o S para seguir cargando :";cin>>res;
        system("clear");
    }
    










    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<setw(3)<<matSorteo[i][j]<<"  ";
        }
        cout<<endl;
    }    
}