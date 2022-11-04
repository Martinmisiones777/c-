#include<iostream>
#include<string.h>
#include<iomanip>
#include<ctime>



using namespace std;

int main(){
    int matriz[4][4],suma=0,sumaPares=0,sumaImpares=0,sumaCol=0,sumaFila=0,sumaDiagonal=0;
    srand(time(0));
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matriz[i][j]=rand()%9;
            suma+=matriz[i][j];
            if (matriz[i][j]%2==0)
            {
                sumaPares+=matriz[i][j];
            }else if (matriz[i][j]%2!=0)
            {
                sumaImpares+=matriz[i][j];
            }
        }
        
    }

         for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i==j)
            {
                sumaDiagonal+=matriz[i][j];
            }
            
        }
        
    }
  
    //imprimo la matriz
     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<setw(3)<<matriz[i][j];
        }cout<<endl;
        
    }
    cout<<endl;
    cout<<endl;
        //suma columnas
    for (int j = 0; j < 4; j++)
    {
        sumaCol=0;
        for (int i = 0; i < 4; i++)
        {
            sumaCol+=matriz[i][j];
        }
        cout<<"la suma de la columna "<<j+1<<" es = "<<sumaCol<<endl;
    } 
    cout<<endl;
    cout<<endl;
    //suma filas
         for (int i = 0; i < 4; i++)
    {
        sumaFila=0;
        for (int j = 0; j < 4; j++)
        {
            sumaFila+=matriz[i][j];
        }cout<<"la suma de la fila "<<i+1<<" es= "<<sumaFila<<endl;
        
    }
    cout<<endl;
    cout<<endl;

    cout<<"la suma total de la matriz es = "<<suma<<endl;
    cout<<"la suma de los numeros pares de la matriz es = "<<sumaPares<<endl;
    cout<<"la suma de los numeros impares de la matriz es = "<<sumaImpares<<endl;
    cout<<"la suma de la diagonal proncipal es = "<<sumaDiagonal<<endl;


    cout<<endl;
    cout<<endl;
    cout<<"matriz transpuesta"<<endl;
    //imprimo la transpuesta
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            cout<<setw(3)<<matriz[i][j];
        }cout<<endl;
        
    }
    
    


return 0;
}