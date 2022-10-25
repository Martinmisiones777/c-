#include<iostream>

using namespace std;

int main(){

int modelo = 0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
for (int i = 0; i < 10; i++)
{
    cout<<"ingrese modelo 1-2-3-4-5-6 "<<endl;
    cin>>modelo;
    system("clear");
    if (modelo==1)
    {
        c1++;
    }else if (modelo==2)
    {
        c2++;
    }else if (modelo==3)
    {
        c3++;
    }else if (modelo==4)
    {
        c4++;
    }else if (modelo==5)
    {
        c5++;
    }else if (modelo==6)
    {
        c6++;
    }
       
}
cout<<"hay "<<c1<<" alpargatas del modelo 1"<<endl;
cout<<"hay "<<c2<<" alpargatas del modelo 2"<<endl;
cout<<"hay "<<c3<<" alpargatas del modelo 3"<<endl;
cout<<"hay "<<c4<<" alpargatas del modelo 4"<<endl;
cout<<"hay "<<c5<<" alpargatas del modelo 5"<<endl;
cout<<"hay "<<c6<<" alpargatas del modelo 6"<<endl;
return 0;    
}