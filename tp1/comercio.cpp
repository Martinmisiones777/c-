//ej1
#include<iostream>


using namespace std;
int main(){

int art1=0,art2=0,selec=1,selecArt=0,cantArt;
float totArt1,totArt2,precio;



do{
    cout<<"ingrese articulo 1 o articulo 2\n";cin>>selecArt;
    cout<<"ingrese precio del producto\n";cin>>precio;
    cout<<"ingrese la cantidad de articulos que va a comprar\n";cin>>cantArt;
    if(selecArt==1){
        art1=art1+cantArt;
        totArt1=totArt1+(precio*cantArt);

    }else if(selecArt == 2){

            art2=art2+cantArt;
            totArt2=totArt2+(precio*cantArt);

    }

    cout<<"1 para continuar 0 para salir\n";cin>>selec;
    cout<<"\n\n";
    cantArt=0;precio=0;
}while(selec!=0);
system("clear");
cout<<"total de articulos 1 = "<<art1<<endl<<"cantidad de articulos 2= "<<art2<<endl;
cout<<"\n\n";
cout<<"precio acumulado del atriculo 1 es= "<<totArt1<<endl<<"precio acumulado del articulo 2 es= "<<totArt2<<endl;


return 0;
}
