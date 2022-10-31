#include<iostream>

using namespace std;

int main(){
    int vec[10];
    int acu=0;

    for (int i = 0; i < 10; i++)
    {
        cout<<"ingrese valor "<<i+1<<endl;
        cin>>vec[i];
        acu=acu+vec[i];

    }
    cout<<"promedio= "<<acu/10;
    



}