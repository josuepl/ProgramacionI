#include <iostream>
using namespace std;

int menuP();
int menuA(int cuenta);
int menuB(int cuenta);
int menuPo(int cuenta);

int main(){
    int opc, cuenta=0;
    do{
        opc = menuP();
        switch (opc)
        {
        case 1:
            cuenta = menuA(cuenta);
            break;
        
        default:
            break;
        }
    }while(opc!=4);
    return 0;
}

int menuP(){
    int opc=7;
    cout<<"El siguiente programa calcula el costo de comer en un restaurante"<<endl;
    cout<<"--- Menu de servicio ---\n";
    cout<<"1. Alimentos"<<endl;
    cout<<"2. Bebidas"<<endl;
    cout<<"3. Postres"<<endl;
    cout<<"4. Salir - Cuenta"<<endl;
    cout<<"Ingresa la opcion deseada: ";
    cin>>opc;
    return opc;
}

int menuA(int cuenta){
    int opcAl= 7;
    int cant;
    do
    {
        cout<<"--- Menu de Alimentos ---\n";
        cout<<"1. Sopa \t $30.00"<<endl;
        cout<<"2. Pasta\t $40.00"<<endl;
        cout<<"3. Filete\t $50.00"<<endl;
        cout<<"4. Salir - Cuenta"<<endl;
        cout<<"Ingresa la opcion deseada: ";
        cin>>opcAl;
        switch (opcAl)
        {
        case 1:
            cout<<"Ingresa las porciones de Sopa que quieres:";
            cin>>cant;
            cuenta = cuenta + cant*30;
            break;
        case 2:
            cout<<"Ingresa las porciones de Pasta que quieres:";
            cin>>cant;
            cuenta = cuenta + cant*40;/* code */
            break;
        case 3:
            cout<<"Ingresa las porciones de Filetes que quieres:";
            cin>>cant;
            cuenta = cuenta + cant*50;
            break;
        case 4:
            cout<<"Has gastado: "<<cuenta<<endl;
            break;
        default:
            break;
        }
    } while (opcAl!=4);
    return cuenta;
}