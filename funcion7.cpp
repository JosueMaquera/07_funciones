#include<iostream>
using namespace std;
int factorial (int);
int main () {
	int m,n,c;
	cin>>m>>n;
	c=factorial(m)/(factorial(n)*factorial(m-n)) ;
	cout<<c;
	return 0;
}
int factorial(int n) {
	int f,i;
	f=1;
	for (i=2;i<=n;i++) {
		f=f*i;
	}
	return f;
}