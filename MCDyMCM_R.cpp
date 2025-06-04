#include<iostream> 
using namespace std;
void mcd_mcm(int a, int b, int &, int &);
int main() {
    int mcm,mcd,a,b;
    cin >> a >> b;
    mcd_mcm(a,b,mcd,mcm);
    cout << "MCD: " << mcd << endl;
    cout << "MCM: " << mcm << endl;

    return 0;

}
void mcd_mcm(int a, int b, int &mcd, int &mcm) {
    int i;
    i = 1;
    while (i <= a && i <= b) {
        if (a % i == 0 && b % i == 0) {
            mcd = i;
        }
        i += 1;
    }
    mcm = (a * b) / mcd; 
    //cout<<mcd;
    //cout<<mcm;
}