#include<iostream>

using namespace std;

int main(){
    int myMatriz1[3][3],acu=0;
    cout<<"ingrese numeros enteros"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"ingrese el valor para "<<"["<<i+1<<"]"<<"["<<j+1<<"]";
            cin>>myMatriz1[i][j];
            acu+=myMatriz1[i][j];
            system("clear");
        }
     
    }
    if (acu%2==0)
    {
        cout<<"el resultado d la suma es = "<<acu<<"es un numero par "<<endl;
    }
    else
    {
        cout<<"no es par";
    }
    
    
    


}
