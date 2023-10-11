#include <iostream>
using namespace std;
int main()
{
    int num[5], flag;

    cout<<"Programa pide 5 valores y los promedia"<<endl;
    for(int ix =0; ix<5; ix++){
        cout<<"Ingresa el "<<ix+1<<": ";
        cin>>num[ix];
    }
    cout<<"pos|";
    for(int ix=0; ix<5;ix++){
        cout<<ix<<"\t|";
    }
    cout<<endl;
    cout<<"val|";
    for(int ix=0; ix<5;ix++){
        cout<<num[ix]<<"\t|";
    }
    cout<<endl;

    cout<<"¿Quieres cambiar el valor de un elem del arreglo (0 -> SI, 1 -> NO)?";
    cin>>flag;
    if(flag == 1){
        int pos;
        cout<<"¿Cual posición quieres cambiar? ";
        cin>>pos;
        cout<<"El valor a modificar es: "<<num[pos]<<endl;
    cout<<"Ingresa el nuevo valor: ";
        cin>>num[pos]; 
    }
    float acum = 0, prom;
    for(int ix= 0; ix < 5; ix++){
        acum+= num[ix];// acum = aum + num[ix];
    }
    prom = acum/5;
cout<<"El promedio es: "<<prom<<endl;
} 

