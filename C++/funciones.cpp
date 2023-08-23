    #include<iostream>
    using namespace std;
    
    float areaCir(float radio){
        float area;
        area = 3.1416*radio*radio;
        return area;
    }
    int main(){
        float radio, area;
        cout<<"Hola bienvenido, el siguiente programa, calcula el area del circulo."<<endl;
        cout<<"Ingresa el valor del radio: ";
        cin>>radio;
        area = areaCir(radio);
        cout<<"el area calculada es: "<<area<<endl;
        return 0;
    }