#include<iostream>

using namespace std;

int main(){
    int myMatriz1[2][2],acu=0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"ingrese el valor para "<<"["<<i+1<<"]"<<"["<<j+1<<"]";
            cin>>myMatriz1[i][j];
            acu=acu+myMatriz1[i][j];
        }
     
    }
    cout<<"el promedio es = "<<acu/4<<endl;


}
