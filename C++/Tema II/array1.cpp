#include <iostream>
using namespace std;
float promedio(int listaCal[10]);
int main(){
    int listaCal[10]; // [0,1,2,3,4,5,6,7,8,9]
    int auxCal;
    //listaCal[0] = 10;
    cout<<"Programa que calcula el promedio de 10 calificaciones"<<endl;
    for(int ix=0;ix<10;ix++){
        cout<<"Ingresa la calificacion "<<ix + 1<<": ";
        cin>>auxCal;// listaCal[ix];
        listaCal[ix] = auxCal;
    }
    cout<<"El promedio es: "<<promedio(listaCal);
    return 0;
}
float promedio(int listaCal[10]){
    float prom;
    int sum=0;
    for(int ix=0; ix<10; ix++){
        sum+= listaCal[ix];
    }
    prom = sum/10;
    cout<< sum<<endl;
    return prom;//sum/10;
}
