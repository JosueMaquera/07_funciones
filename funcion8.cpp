#include<iostream>
using namespace std;
int main() {
    int mcm, mcd, num1 , num2, i;
    cin >> num1 >> num2;
    i = 1;
    while (num1 >= i && num2 >= i) {
        if (num1 % i == 0 && num2 % i == 0) {
            mcd = i;
        }
        i = i + 1;
    }
    mcm = (num1 * num2) / mcd;
    cout << "El maximo comun divisor es: " << mcd << endl;
    cout << "El minimo comun multiplo es: " << mcm << endl;

    return 0;
}