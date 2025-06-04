#include<iostream>
using namespace std;
int minimo_comun_multiplo(int, int, int);
int maximo_comun_divisor(int, int);
int main() {
    int mcm, mcd, num1 , num2, i;
    cin >> num1 >> num2;
    mcd = maximo_comun_divisor(num1,num2);
    mcm = (num1 * num2) / mcd;
    cout << "El maximo comun divisor es: " << mcd << endl;
    cout << "El minimo comun multiplo es: " << mcm << endl;

    return 0;
}
int maximo_comun_divisor(int num1, int num2) {
    int i, mcd;
    i = 1;
    while (num1 >= i && num2 >= i) {
        if (num1 % i == 0 && num2 % i == 0) {
            mcd = i;
        }
        i = i + 1;
    }
    return mcd;
}