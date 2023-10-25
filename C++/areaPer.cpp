#include <iostream>
using namespace std;
int menuA();// declaracion prototipo
int menuP();// declaracion prototipo
// Areas
void circuloA();
void cuadradoA();
void rectanguloA();
// Perimetros
void isoscelesP();
void equilateroP();
void pentagonoP();

int menu(){// declaracion y definicion
    int opc;
    cout<<"Programa que calcula areas y perimetros"<<endl;
    cout<<"1. Areas"<<endl;
    cout<<"2. Perimetros"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Ingresa la opcion deseada: ";
    cin>>opc;
    return opc;
}

int main()
{
    int opc, opc2;
    do{
        opc = menu();
        switch (opc)
        {
        case 1:{
            do
            {
                opc2 = menuA();
                switch (opc2)
                {
                case 1:
                    cuadradoA();
                    break;
                case 2:
                    circuloA();
                    break;
                case 3:
                    rectanguloA();
                default:
                    break;
                }
            } while (opc2!=4);
        }
            break;
        case 2:{
            do
            {
                opc2 = menuP();
            } while (opc2!=4);
        }
            break;
        case 3:
            cout<<"----- Adios ------"<<endl;        
            break;
        default:
            cout<<"Ingresa una opcion valida"<<endl;
            break;
        }
    }while(opc!=3);
    return 0;
}

int menuA(){
 int opc;
    cout<<"----- Areas -----"<<endl;
    cout<<"1. Cuadrado"<<endl;
    cout<<"2. Circulo"<<endl;
    cout<<"3. Rectangulo"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Ingresa la opcion deseada: ";
    cin>>opc;
    return opc;
}
int menuP(){
 int opc;
    cout<<"----- Perimetros -----"<<endl;
    cout<<"1. Isosceles"<<endl;
    cout<<"2. Equilatero"<<endl;
    cout<<"3. Pentagono"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Ingresa la opcion deseada: ";
    cin>>opc;
    return opc;
}

void circuloA(){
    float radio, area;
    cout<<"Has ingresado al calculo de area del circulo"<<endl;
    cout<<"Ingresa el valor del radio: ";
    cin>>radio;
    area = 3.1416*radio*radio;
    cout<<"El area calculada es: "<<area<<endl;
}
void cuadradoA(){
    float lado, area;
    cout<<"Has ingresado al calculo de area del cuadrado"<<endl;
    cout<<"Ingresa el valor del lado: ";
    cin>>lado;
    area = lado*lado;
    cout<<"El area calculada es: "<<area<<endl;
}
void rectanguloA(){

}
void isoscelesP(){}
void equilateroP(){}
void pentagonoP(){}