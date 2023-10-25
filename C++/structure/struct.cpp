#include <iostream>
using namespace std;

struct alumno
{
    string nombre;
    int edad;
    float cal;
    float prom;
    bool aprob;
    /* data */
};

int main(){
    alumno al1;
    al1.nombre="Josue";
    al1.cal = 6.57;
    al1.edad = 41;
    al1.aprob = true;

    cout<<"Nombre: "<<al1.nombre<<"\tEdad:"<<al1.edad<<"\tCal:"<<al1.cal<<endl;

    return 0;
} 
