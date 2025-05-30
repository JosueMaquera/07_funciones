#include <iostream>
using namespace std;
int main() {
    int num1,num2,i,dividendo,cociente;
    cin>>num1>>num2;
    cociente=0;
    dividendo=num1;
    while (dividendo>num2) {
        dividendo = dividendo - num2;
        cociente = cociente + 1;
    }
    cout<<cociente<<endl;
    cout<<dividendo<<endl;
    return 0;
}