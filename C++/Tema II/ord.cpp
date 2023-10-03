#include <iostream>
using namespace std;

void ordenadar(int *lista);
void impLista(int lista[10]);
int main()
{
    int lista[] = {7, -2, 1, 0, 4, 8, -3, 2, 6, 9};
    
    impLista(lista);
    return 0;
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
}
