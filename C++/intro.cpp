#include <iostream>
using namespace std;

int main(){
    // declaracion de variables
    int intEdad;
    int numAmigos;

    // Asignar datos o valores
    intEdad = 14;
    numAmigos = 5;

    //declaracion y asignacion 
    int numMaterias = 10;
    
    cout<<"Mi edad es: "<<intEdad<<endl;
    cout<<"Tengo: "<<numAmigos<<" amigos"<<endl;

    int multiplicacion = numAmigos * 4.3;
    float fmultiplicacion = numAmigos *4.3;
    cout<<"El resultado int: "<<multiplicacion<<"float: "<<fmultiplicacion<<endl;
    cout<<"Ingresa tu edad: "<<endl;
    cin >> intEdad;
    cout << "Tu edad es: "<< intEdad << endl;
    if(intEdad < 18){
        cout<<"Eres menor de edad ya que tienes solo: "<<intEdad<<endl;
    }


}
