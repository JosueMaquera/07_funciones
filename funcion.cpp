#include <iostream>
using namespace std;
int main() {
    int n,a,b,i,serie;
    cout<<"Ingrese la cantidad de numeros de Fibonacci a imprimir: ";
    cin >> n;
    a=0;
	b=1;
    for (i=0;i<n;i++) {
        cout<<a<<endl;           
        serie=a+b;           
        a=b;                       
        b=serie;
    }
    return 0;
}