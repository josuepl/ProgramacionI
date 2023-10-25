#include <iostream>
using namespace std;

void impLista(int lista[9]);
int posLis(int lista[9], int val);
int main(){
    int lista[]={-3, -6, 7, 0, 5, 4, 3, -2, 1};
    impLista(lista);
    //copiar
    int listaOrd[9];
    // copiar lista
    for(int ix=0; ix<9; ix++){
        listaOrd[ix] = lista[ix];
    }
    impLista(listaOrd);
    //ordenar
    int pos, aux;
    for(int ixL =0; ixL<9; ixL++){
        pos = posLis(listaOrd,lista[ixL]);
        for(int ix =0;ix <9;ix++){
            if(ix > pos){
                if(listaOrd[pos] > listaOrd[ix]){
                    aux = listaOrd[pos];
                    listaOrd[pos] = listaOrd[ix];
                    listaOrd[ix] = aux;
                    pos = ix;
                }
            }
            else if(ix < pos){
                if(lista[pos] < lista[ix]){
                    aux = lista[pos];
                    lista[pos] = lista[ix];
                    lista[ix] = aux;
                    pos = ix;
                }
            }
        }
    }
    impLista(listaOrd);
}
int posLis(int lista[9], int val){
    for(int ix=0; ix<9; ix++){
        if(val == lista[ix]){
            return ix;
        }
    }
}
void impLista(int lista[9]){
    cout<<"Pos:|";
    for(int ix = 0; ix<9; ix++){
        cout<<ix<<"\t|";
    }
    cout<<endl;
    cout<<"Val:|";
    for(int ix = 0; ix<9; ix++){
        cout<<lista[ix]<<"\t|";
    }
    cout<<endl;
}