#include<iostream>
using namespace std;
void mcd_mcm(int a, int b, int *mcd, int *mcm);
int main() {
    int x, y;
    cin >> x >> y;
    int rMCD, rMCM;
    mcd_mcm(x,y,&rMCD,&rMCM);
    cout << "MCD: " << rMCD << endl;
    cout << "MCM: " << rMCM << endl;

    return 0;
}
void mcd_mcm(int a, int b, int *mcd, int *mcm) {
    int i;
    i = 1;
    *mcd = 1;
    while (i <= a && i <= b) {
        if (a % i == 0 && b % i == 0) {
            *mcd = i;
        }
        i += 1;
    }
    *mcm = (a * b) / *mcd; 
}