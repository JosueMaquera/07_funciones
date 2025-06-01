#include <iostream> 
using namespace std;
int suma_divisores_propios(int num);
int main() {
    int num1,num2,suma1,suma2;
    cin >> num1 >> num2;
    suma1 = suma_divisores_propios(num1);
    suma2 = suma_divisores_propios(num2);
    if (num1 == suma2 && num2 == suma1) {
        cout << "Son numeros amigos" <<endl;
        return 1;
    }
    cout << "No son numeros amigos" <<endl;
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