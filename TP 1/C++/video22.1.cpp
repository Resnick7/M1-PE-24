/*
Realice un programa que solicite de la entrada estandar un entero
del 1 al 10 y muestre en la salida estandar su tabla de multiplicar
*/

#include<iostream>

using namespace std;

int main() {
	int num;
	
	do{
	cout<<"Ingrese un numero: "; cin>>num;
	} while ((num<1) || (num>10));
	
	for(int i=1;i<20;i++) {
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}

	return 0;
}
