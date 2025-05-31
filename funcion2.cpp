#include <iostream>
using namespace std;
int determinar_menor(int num1 , int num2);
int determinar_mayor(int num1 , int num2);
bool validacion_datos(int num1, int num2);
void imprimir_resultados(int resto , int cociente, int mayor, int menor);
int main() {    
    int num1,num2,dividendo,cociente,divisor,resto,mayor,menor;
    cout<<"Ingrese los numeros a dividir el mayor siempre sera el dividendo y el menor el divisor: "<<endl;
    cin>>num1>>num2;
    cociente=0;
    if (!validacion_datos(num1,num2)) {
        cout<<"Datos invalidos: ambos deben ser positivos"<<endl;
        return 1;
    }
    mayor = determinar_mayor(num1,num2);
    menor = determinar_menor(num1,num2);
    dividendo = mayor;
    divisor = menor;
    while (dividendo>=divisor) {
        dividendo = dividendo - divisor;
        cociente = cociente + 1;
    }
    resto=dividendo;
     imprimir_resultados(resto, cociente, mayor, menor);
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
void imprimir_resultados(int resto, int cociente, int dividendo, int divisor) {
    cout<<"-------------------------------------"<<endl;
    cout<<"El cociente de la division "<<dividendo<<"/"<<divisor<<" es: "<<cociente<<endl;
    cout<<"El resto de la division es: "<<resto;
}