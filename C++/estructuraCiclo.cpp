#include <iostream>
using namespace std;

int main(){
    int edad = 15;
    int ix,res, base=20;
    /*(for(ix = 1; ix <=10; ix++){
        res = base*ix;
        cout<<ix<<"X"<<base<<"= "<<res<<endl;
    }*/
    while((edad<18)==false){
        cout<<"Debes de ser mayor de edad!!!"<<endl;
        cout<<"Ingresa nuevamente tu edad: ";
        cin>>edad;
    }
    cout<<"Termino el programa \n";
    return 0;
}