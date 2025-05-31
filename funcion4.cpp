#include <iostream>
using namespace std;
int determinar_perfecto(int n);
bool validar_datos (int n);
void imprimir_resultados(int n, int suma);
int main() {
    int n,suma;
    cout << "Ingresa un numero entero positivo: ";
    cin >> n;
    if (!validar_datos(n)) {
        return 1;
    }
    suma = determinar_perfecto(n);
    imprimir_resultados(n,suma);    
    return 0;
}
bool validar_datos(int n) {
    if (n <= 0) {
        cout << "----------------------------------"<<endl;
        cout << n << " no es un numero perfecto porque debe ser positivo";
        return false;
    } 
    return true; 
}
int determinar_perfecto(int n) {
    int suma,i;
    suma=0;
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            suma = suma + i;
        }
    }
    return suma;
}
void imprimir_resultados(int n, int suma) {
    cout << "----------------------------------"<<endl; 
    if (n == suma) {
        cout << n << " es un numero perfecto";
    }
    else {
        cout << n << " no es un numero perfecto";
    }
}