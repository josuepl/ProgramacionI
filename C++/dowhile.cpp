#include <iostream>
using namespace std;

int menu();

float prom();
float promAp();
float promRep();

int main(){
    int opcion;
    float prom;
    do
    {
        opcion = menu();
        switch (opcion)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            prom = promAp();
            cout<<"El promedio es: "<<prom<<endl;
            break;
        default:
            break;
        }
    } while (opcion != 4);
    
   /*opcion = 5;
   while( opcion != 4){
    opcion = menu();
   }*/
} 

int menu(){
    int opcion;
    cout<<"----- Programa que calcula promedios -----"<<endl;
    cout<<"1. Calcular el promedio de calificaciones"<<endl;
    cout<<"2. Calcular el promedio de cal Reprobadas"<<endl;
    cout<<"3. Calcular el promedio de cal Aprobadas"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Ingresa la opcion deseada del menu: ";
    cin>> opcion;
    return opcion;
}

float promAp(){
    int calif, numCal, cont;
    float acum = 0, prom;
    cout<<"Ingresa la cantidad de cal a promediar: ";
    cin>>numCal;
    cont = 0;
    do{
        cout<<"Ingresa la calf a promediar: ";
        cin>> calif;
        if(calif >=6 && calif <=10){
            acum = acum + calif;
            //acum+= calif;
            cont+=1;
        }
        else{
            cout<<"la Calificacion: "<<calif<<" no es una calf aprob"<<endl;
        }
    }while(cont < numCal);
    prom = acum/numCal;
    return prom;
}