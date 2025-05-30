#include <iostream>
using namespace std;
int determinar_menor(int num1 , int num2);
int determinar_mayor(int num1 , int num2);
bool validacion_datos(int num1, int num2);
int main() {    
    int num1,num2,i,dividendo,cociente,divisor;
    cin>>num1>>num2;
    cociente=0;
    if (!validacion_datos(num1,num2)) {
        cout<<"Datos invalidos: ambos deben ser positivos"<<endl;
        return 1;
    }
    dividendo=determinar_mayor(num1,num2);
    divisor=determinar_menor(num1,num2);
    while (dividendo>=divisor) {
        dividendo = dividendo - divisor;
        cociente = cociente + 1;
    }
    cout<<cociente<<endl;
    cout<<dividendo<<endl;
    return 0;
}
int determinar_mayor(int num1 , int num2) {
    int mayor;
    if (num1>num2) {
        mayor=num1;
    }
    else {
        mayor=num2;
    }
    return mayor;
}
int determinar_menor(int num1 , int num2) {
    int menor;
    if (num1>num2) {
        menor=num2;
    }
    else {
        menor=num1;
    }
    return menor;
}
bool validacion_datos(int num1 , int num2) {
    if (num1>0 && num2>0) {
        return true;
    }
    else {
        return false;
    }
}