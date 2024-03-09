// Escribe la expresion matematica como expresion en C++:

#include<iostream>

using namespace std;

int main() {
	float a,b, resultado = 0;
	
	cout<<"Ingrese el valor a: ";
	cin>>a;
	cout<<"Ingrese el valor b: ";
	cin>>b;
	
	resultado = (a/b) +1;
	
	cout<<"El resultado de la expresion es: "<< resultado;
	
	return 0;
	
	}
