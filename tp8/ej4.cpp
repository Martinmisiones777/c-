#include <iostream>
using namespace std;
int main(){
    int matriz[3][3],sumaFila=0,mayor=0,suma=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Introduzca el valor para "<<"["<<i<<"]"<<"["<<j<<"]";
            cin>>matriz[i][j];
        }
        cout<<"se completo la fila \n";
        
    }
    system("clear");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
        
    }
    cout<<"....................................................\n\n";

    for (int i = 0; i < 3; i++)
    {
        sumaFila=0;
        for (int j = 0; j < 3; j++)
        {
           sumaFila+=matriz[i][j];

        }
        if (sumaFila>mayor)
        {
            mayor=sumaFila;
        }
        
        
    }

    for (int j = 0; j < 3; ++j) {
		suma = 0;
		for (int i = 0; i < 3; ++i) {
			suma += matriz[i][j];
		}
		cout << "La suma de la columna " << j << " es: " << suma << endl;
	}
    cout<<"la fila que mas sumo "<<mayor<<endl;
    cout<<"\n\n";

    
}



