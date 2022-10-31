#include<iostream>
#include<string.h>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main(){
    int mat1[3][3],mat2[3][3],res[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat1[i][j] = 1 + rand()%10;
            mat2[i][j]=mat1[i][j]+2;
            res[i][j]=mat2[i][j]+mat1[i][j];
        }
        
    }


    
    for (int i = 0; i < 3; i++) { // recorre las filas

        for (int j = 0; j < 3; j++) { // columnas de la primera matriz
            cout << setw(2)<<mat1[i][j]<<" ";
        }
        cout << "  +  "; // tabuladores
        for (int k = 0; k < 3; k++) { // columnas de la segunda matriz
            cout << setw(2)<<mat2[i][k] << " ";
        }
        cout << "   =   "; // tabuladores
        for (int l = 0; l < 3; l++) { // columnas de la tercera matriz
            cout << setw(2)<<res[i][l] << " ";
        }
        cout << "\n"; // salto de línea
    }
}