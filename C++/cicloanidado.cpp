#include <iostream>
using namespace std;

int main(){
    for(int ixX = 0; ixX < 6; ixX++){
        for(int ixY = 0; ixY< ixX; ixY++){
            cout<<"*";
        }
        cout<<endl;
    }
}