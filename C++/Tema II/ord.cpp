#include <iostream>
using namespace std;

void ordenar(int lista[10]);
void impLista(int lista[10]);
int main()
{
    int lista[] = {7, -2, 1, 0, 4, 8, -3, 2, 6, 9};
    impLista(lista);

    // ordenar(lista[10]);
    int lista2[10];
    //copiar lista
    for(int ix= 0; ix<10; ix++){
        lista2[ix] = lista[ix];
    }
    int aux;
    int ixI=0;
    for(int ixY = 0; ixY<10; ixY ++){
        posLis(lista, lista2[ixY]);
        ixI = 0;
      for(int ix=0; ix<10; ix++){
        //cout<<"Pre -> "<<lista[ixI]<<"--"<<lista[ix]<<endl;
        if(aux>lista[ix]){
            aux = lista[ixI];
            lista[ixI] = lista[ix];
            lista[ix] = aux;
            ixI = ix;
            //out<<"Ord -> "<<lista[ixI]<<"--"<<lista[ix]<<endl;
        }
    }  
    }
    
    impLista(lista);

    return 0;
}
int posLis(int lista[10], int val){
    for(int pos= 0; pos<10; pos++){
        if (val = lista[pos])
            return pos;
    }
    return pos;
}
void ordenar(int *lista){
    int aux;
    int ixI=0;
    for(int ix=0; ix<10; ix++){
        if(lista[ixI]>lista[ix]){
            aux = lista[ix];
            lista[ix] = lista[ixI];
            lista[ix] = aux;
            ixI = ix;
        }
        impLista(lista);
    }
}

void impLista(int lista[10]){
    cout<<"Pos \t|";
    for(int ix =0 ;ix<10; ix++){
        cout<<ix<<"\t|";
    }
    
    cout<<"\nVal \t|";
    for(int ix =0 ;ix<10; ix++){
        cout<<lista[ix]<<"\t|";
    }
    cout<<endl;
}
