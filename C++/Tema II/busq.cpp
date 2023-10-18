#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void impLis(int lista[10]);
int main(){
    int datos[10];
    int aux;
    bool flag;
    srand(time(NULL));
    for(int ix=0; ix<10; ix++){
        aux = -10 + rand()%(20);
        for(int iy=0; iy<=ix;iy++){
            if( aux == datos[iy]){
                cout<<"Dato repetido"<<datos[iy]<<"-"<<endl;
                flag = true;
            }
        }
        if(flag == true){
            ix-=1;
            flag = false;
        }
        else{
            datos[ix] = aux;
        }
    }
    cout<<endl;
    impLis(datos);

    return 0;
}
void impLis(int lista[10]){
    for(int ix = 0; ix<10; ix++){
        cout<<lista[ix]<<"|";
    }
    cout<<endl;
}