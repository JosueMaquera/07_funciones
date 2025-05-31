#include <iostream>
using namespace std;
int main() {
    int n, i, suma;
    cout << "Ingresa un numero entero positivo: ";
    cin >> n;
    suma = 0;
    if (n <= 0) {
        cout << "----------------------------------"<<endl;
        cout << n << " no es un numero perfecto porque debe ser positivo";
        return 0;
    }
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            suma = suma + i;
        }
    }
    if (n == suma) {
        cout << "----------------------------------"<<endl;
        cout << n << " es un numero perfecto";
    }
    else {
        cout << "----------------------------------"<<endl;
        cout << n << " no es un numero perfecto";
    }
    return 0;
}