#include<iostream>

using namespace std;

int main(){

    int mat1[3][3],acu=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"ingrese el valor para "<<"["<<i+1<<"]"<<"["<<j+1<<"]";
            cin>>mat1[i][j];
            mat1[i][j]*=3;
            if (i==j)
            {
                acu=acu+mat1[i][j];
            }
            
            system("clear");
        }
     
    }
    cout<<"la suma de la diagonal es = "<<acu<<endl; 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           cout<<mat1[i][j]<<" ";
        }
     cout<<endl;
    }


}