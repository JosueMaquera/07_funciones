#include <iostream>
using namespace std;
int imprimir_sumar(int n);
int main() {
    int n, suma;
    cout<<"Ingrese la cantidad de numeros de Fibonacci a imprimir: ";
    cin>>n;
    suma=imprimir_sumar(n);
    cout<<"La suma de la serie es: "<<suma<<endl;
    return 0;
}
int imprimir_sumar(int n) {
    int a,b,suma,serie;
	a=0;
	b=1; 
	suma=0;
    for (int i = 0; i < n; i++) {
        cout << a << endl;
        suma=suma+a;
        serie=a+b;
        a=b;
        b=serie;
    }
    return suma;
}
