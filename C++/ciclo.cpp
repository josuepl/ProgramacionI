#include<iostream>
using namespace std;

int main(){
    int ix, iy, numRep;/*
        int acumulador = 0, cal;
    for(ix=10; ix < 10; ix++){
        cout << "Ingresa tu calificacion: ";
        cin >> cal;
        acumulador+= cal;
        }
    */
    cout<< "Ingresa la cantidad de veces que quieres que se repita el simbolo *: ";
    cin >> numRep;

    for (ix = 1; ix <=  numRep; ix++){
        for(iy=1;iy <= ix;iy++){
            if((ix % 2) == 1){
                cout <<"$";
            }
            else{
                cout <<"#";
            }

        }
        cout<<endl;
    }

    return 0;
}