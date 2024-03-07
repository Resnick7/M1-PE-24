// Escribe la expresion matematica como expresion en C++:

#include<iostream>

using namespace std;

int main() {
	float a,b,c,d, resultado = 0;
	
	cout<<"Ingrese el valor a: ";
	cin>>a;
	cout<<"Ingrese el valor b: ";
	cin>>b;
	cout<<"Ingrese el valor c: ";
	cin>>c;
	cout<<"Ingrese el valor d: ";
	cin>>d;
	
	resultado = (a+b)/(c+d);
	
	cout<<"El resultado de la expresion es: "<< resultado;
	
	return 0;
	
	}
