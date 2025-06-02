#include <iostream>
using namespace std;
bool validar_datos(int num1);
int determinar_primo(int num1);
void imprimir_resultados(int cantidad_divisores);
int main() {
    int num1,cantidad_divisores;
    cin >> num1;
    if (validar_datos(num1)) {
        cout << "Ingrese un numero positivo";
        return 1;
    }
    cantidad_divisores = determinar_primo(num1);
    imprimir_resultados(cantidad_divisores);
    return 0;
}
int determinar_primo(int num1) {
    int cantidad_divisores; 
    cantidad_divisores = 0;
    for (int i = 1; i <= num1; i++) {
        if (num1 % i == 0) {
            cantidad_divisores = cantidad_divisores + 1;
        }
    }
    return cantidad_divisores;
}
void imprimir_resultados(int cantidad_divisores) {
    if (cantidad_divisores == 2) {
        cout << "Es primo";
    } else {
        cout << "No es primo";
    }
}
bool validar_datos(int num1) {
    return num1 <= 0;
}