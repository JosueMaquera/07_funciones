#include <iostream>
using namespace std;
int determinar_perfecto(int n);
int determinar_primo(int n);
bool validar_datos(int n);
void imprimir_resultados(int n, int suma, int divisores);
int main() {
    int n, suma, divisores;
    cout << "Ingresa un numero entero positivo: ";
    cin >> n;
    if (!validar_datos(n)) {
        return 1;
    }
    suma = determinar_perfecto(n);
    divisores = determinar_primo(n); 
    imprimir_resultados(n,suma,divisores);    
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
void imprimir_resultados(int n, int suma, int divisores) {
    cout << "----------------------------------"<<endl; 
    if (divisores == 2) {
        cout << n << " es un numero primo"<<endl;
    }
    if (n == suma) {
        cout << n << " es un numero perfecto";
    }
    else {
        cout << n << " no es un numero perfecto";
    }
}
int determinar_primo(int n) {
    int divisores,i;
    divisores = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores = divisores + 1;
        }
    }
    return divisores; 
}