#include <iostream>
using namespace std;
bool validacion_datos(int num1, int num2);
int main() {    
    int num1,num2,i,dividendo,cociente;
    cin>>num1>>num2;
    cociente=0;
    dividendo=num1;
    if (validacion_datos(num1,num2)) {
        cout<<"Datos invalidos: ambos deben ser positivos"<<endl;
        return 1;
    }
    while (dividendo>num2) {
        dividendo = dividendo - num2;
        cociente = cociente + 1;
    }
    cout<<cociente<<endl;
    cout<<dividendo<<endl;
    return 0;
}
bool validacion_datos(int num1 , int num2) {
    if (num1>0 && num2>0) {
        return false;
    }
    else {
        return true;
    }
}