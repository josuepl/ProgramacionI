#include <iostream>
#include <ctime>
using namespace std;
int rec(int num);
void itr(int num);
int main(){
    int num;
    unsigned t0, t1;
    cout<<"Programa que realiza el conteo hacia atras dado un valor hasta llegar a 0"<<endl;
    cout<<"Ingresa el valor numerico: ";
    cin>>num;
    t0 = clock();
    itr(num);
    t1 = clock();
    double texe = (double(t1-t0)/CLOCKS_PER_SEC);

    t0 = clock();
    num=rec(num);
    t1 = clock();
    double texe1 = (double(t1-t0)/CLOCKS_PER_SEC);
    cout<<"\nTiempo de exe Iter: "<<texe<<endl;
    cout<<"\nTiempo de exe  Rec: "<<texe1<<endl;
    
    return 0;
}

int rec(int num){
    cout<<num<<"\t|";
    if(num > 0){
        num-=1;
        rec(num);
    }
    return num;
}

void itr(int num){
    for(int ix = num; ix >= 0; ix--){
        cout<<ix<<"\t|";
    }
    cout<<endl;
}