#include <iostream>
using namespace std;
int determinar_primo(int num1);
void imprimir_resultados(int divisores);
int main() {
    int num1,b,c,d,divisores;
    cin >> num1;
    divisores = determinar_primo(num1);
    imprimir_resultados(divisores);
}
int determinar_primo(int num1) {
    int divisores; 
    divisores = 0;
    for (int i = 1; i <= num1; i++) {
        if (num1 % i == 0) {
            divisores = divisores + 1;
        }
    }
    return divisores;
}
void imprimir_resultados(int divisores) {
    if (divisores == 2) {
        cout << "Es primo";
    } else {
        cout << "No es primo";
    }
}