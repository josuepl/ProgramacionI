#include <iostream>
using namespace std;
int *datos(int tam);
void verC(int *listaCal, int tam);
int main(){
    int tam;
    cout<<"Ingresa la cantidad de calificaciones que quieres promediar: ";
    cin >> tam;
    int *listaCal = datos(tam);
    verC(listaCal, tam);

}
int *datos(int tam){
    int *listaCal = new int(tam);
    int auxCal;
    for(int ix=0;ix<tam;ix++){
        cout<<"Ingresa la calificacion "<<ix + 1<<": ";
        cin>>auxCal;// listaCal[ix];
        listaCal[ix] = auxCal;
    }
    return listaCal;
}

void verC(int *listaCal, int tam){
    cout<<"|";
    for(int ix=0;ix<tam;ix++){
        cout<<" "<<listaCal[ix]<<" |";
    }
    cout<<""<<endl;
}