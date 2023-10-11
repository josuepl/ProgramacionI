#include <iostream>
#include <ctime>
using namespace std;

int rec(int val); 
void iter(int val);
int main(){
    unsigned t0, t1;
    int val, aux;
    cout<<"Este programa realiza un conteo decreciente hasta llegar a 0"<<endl;
    cout<<"Ingresa el valor:";
    cin>>val;
    t0 = clock();
    aux = rec(val);
    t1 = clock();
    long double tr =  float(t1 - t0)/CLOCKS_PER_SEC;
    cout<<"\n-------"<<endl;
    t0 = clock();
    iter(val);
    t1 = clock();
    long double ti =  float(t1-t0)/CLOCKS_PER_SEC;
    cout<<"Rec ->Texe: "<<tr<<endl;
    cout<<"Iter->Texe: "<<ti<<endl;
    return 0;
}

int rec(int val){
    if(val >= 0){
        cout<<val<<"\t";    
        rec(val -1);
    }  
    return val;
}

void iter(int val){
    for(int ix = val; ix >= 0; ix--){
        cout<<ix<<"\t";
    }
}