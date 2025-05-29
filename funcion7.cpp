#include<iostream>
using namespace std;
int factorial (int);
bool validacion_combinatoria (int ,int );
int main () {
	int m,n,c;
	cout<<"Ingresa la los elementos de la conbinatoria m y n: "<<endl;
	cout<<"Ingrese el valor de m: ";
	cin>>m;
	cout<<"Ingrese el valor de n: ";
	cin>>n;
	if (!validacion_combinatoria (m,n)) {
		return 1;
	}
	c=factorial(m)/(factorial(n)*factorial(m-n)) ;
	cout<<"El resultado de la combinatoria es: "<<c<<endl;
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
bool validacion_combinatoria(int m, int n) {
	if (n>m || m<0 || n<0) {
		cout<<"No es posible relizar la combinatoria"<<endl;
		return false;
	} 
	else {
		return true;
	}

}