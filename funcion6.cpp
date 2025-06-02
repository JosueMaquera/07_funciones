#include <iostream>
using namespace std;
int main() {
    int num1,b,c,d,divisores;
    cin >> num1;
    divisores = 0;
    for (int i = 1; i <= num1; i++) {
        if (num1 % i == 0) {
            divisores = divisores + 1;
        }
    }
    if (divisores == 2) {
        cout << "Es primo";
        return 1;
    }
    cout << "No es primo";
}