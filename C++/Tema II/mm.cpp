#include <iostream>
using namespace std;

void imprime(int num[3]);
int main()
{
    int num[3];
    int ixM=0, ixE=0;
    bool mayor, menor;
    cout<<"Programa que determina cual de 3 valores es el mayor y cual es el menor"<<endl;
    for(int ix = 0; ix < 3;ix++){
        cout<<"Ingresa el valor a comparar: ";
        cin>>num[ix];
    }
    imprime(num);
    for (int ix = 0; ix < 3; ix++)
    {
        for (int iy  = 0; iy < 3; iy++)
        {
            if( ix != iy){
                if(num[ix] > num[iy]){
                    ixM = ix;
                    mayor =  true;
                }
                else
                    mayor = false;
                    break;
            }
        }
        
    }
    cout<<"Valor mayor :"<<num[ixM];
}

void imprime(int num[3]){
    cout<<"|";
    for(int ix = 0; ix < 3; ix++){
        cout<<num[ix]<<" |";
    }
    cout<<endl;
}