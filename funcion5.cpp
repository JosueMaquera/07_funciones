#include <iostream> 
using namespace std;
int main() {
    int num1,num2,divisores1,divisores2,i,e,suma1,suma2;
    cin >> num1 >> num2;
    divisores1 = 0;
    divisores2 = 0;
    suma1 = 0;
    suma2 = 0;
    for (i = 1; i <= num1; i++) {
        if (num1 % i == 0) {
            divisores1 = divisores1 + 1; 
            suma1 = suma1 + i;
            //cout << i << endl;
        }
    }
    for (e = 1; e <= num2; e++) {
        if (num2 % e == 0) {
            divisores2 = divisores2 + 1;
            suma2 = suma2 + e;
            //cout << e <<endl;
        }
    }
    //cout << suma1 << endl;
    //cout << suma2 << endl;
    if (suma1 == suma2) {
        cout << "Son numeros amigos" <<endl;
        return 1;
    }
    cout << "No son numeros amigos" <<endl;
    return 0;
}