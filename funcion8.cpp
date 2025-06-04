#include<iostream>
using namespace std;
int minimo_comun_multiplo(int, int, int);
int maximo_comun_divisor(int, int);
bool validar_datos(int, int);
void imprimir_resultados(int, int);
int main() {
    int mcm, mcd, num1 , num2;
    cin >> num1 >> num2;
    if (validar_datos(num1,num2)) {
        cout << "Ingrese valores positivos";
        return 1;
    }
    mcd = maximo_comun_divisor(num1,num2);
    mcm = minimo_comun_multiplo(num1,num2,mcd);
    imprimir_resultados(mcd,mcm);

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
int minimo_comun_multiplo(int num1, int num2, int mcd) {
    int mcm;
    mcm = (num1 * num2) / mcd;
    return mcm;
}
bool validar_datos(int num1, int num2) {
    return num1 <= 0 || num2 <= 0;
}
void imprimir_resultados(int mcd, int mcm) {
    cout << "El maximo comun divisor es: " << mcd << endl;
    cout << "El minimo comun multiplo es: " << mcm << endl;
}
