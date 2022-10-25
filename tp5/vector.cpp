#include<iostream>

using namespace std;

int main(){
    int vector[10];
    int vector2[10];
    int res=0;

    for (int i = 0; i < 10; i++){
        vector[i]=10;
        vector2[i]=5;
        res=vector[i]+vector2[i];
        cout<<res<<endl;
    }
    


return 0;    
}