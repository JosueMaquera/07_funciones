#include <iostream> 
using namespace std;
bool validar_datos(int num1, int num2);
void imprimir_resultados(int num1, int num2, int suma1, int suma2);
int suma_divisores_propios(int num);
int main() {
    int num1,num2,suma1,suma2;
    cin >> num1 >> num2;
    if (validar_datos(num1,num2)) {
        cout<<"Ingresa valores positivos";
        return 1;
    }
    suma1 = suma_divisores_propios(num1);
    suma2 = suma_divisores_propios(num2);
    imprimir_resultados(num1,num2,suma1,suma2);
    return 0;
}
int suma_divisores_propios(int num) {
    int suma,i;
    suma = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            suma = suma + i;
        }
    }
    return suma;
}
void imprimir_resultados(int num1, int num2, int suma1, int suma2) {
    cout << "Suma de divisores propios de " << num1 << ": " << suma1 << endl;
    cout << "Suma de divisores propios de " << num2 << ": " << suma2 << endl;
    if (num1 == suma2 && num2 == suma1) {
        cout << "Son numeros amigos" <<endl;
    } else {
        cout << "No son numeros amigos" <<endl;
    }
}
bool validar_datos(int num1, int num2) {
    if (num1 <= 0 || num2 <= 0) {
        return true;
    }
    return false;
}