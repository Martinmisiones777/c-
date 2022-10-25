#include<iostream>

using namespace std;

int main(){

int edad[13],prom=0,acu=0;

for (int i = 0; i < 13; i++)
{
    cout<<"ingrese la edad del alumno : "<<i+1;
    cin>>edad[i];
    acu=acu+edad[i];
    prom=acu/13;
}
cout<<"el promedio de edades es :"<<prom<<endl;

}