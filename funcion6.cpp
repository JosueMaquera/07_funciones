#include <iostream>
using namespace std;
int determinar_primo(int num1);
int main() {
    int num1,b,c,d,divisores;
    cin >> num1;
    divisores = determinar_primo(num1);
    if (divisores == 2) {
        cout << "Es primo";
        return 1;
    }
    cout << "No es primo";
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