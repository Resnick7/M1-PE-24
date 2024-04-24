/*
Determinar si un numero es primo o no, con punteros y ademas
indicar en que posicion de memoria se guardo el numero.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int *dirPrimo,lim;
	
	cout<<"Ingrese cuantos numeros quiere procesar: ";
	cin>>lim;
	
	int num[lim];
	dirPrimo = num;
	
	for (int i=0; i < lim; i++) {
		cout<<"Ingrese el numero "<<i<<": ";
		cin>>num[i];
	}
	
	for (int i = 2; i <= lim/2; i++) {
		dirPrimo++;
		if (num[i] % i == 0) {
			cout<<num[i]<<" es primo y se ubica en "<<dirPrimo;
		}
	}
	
	
	
	return 0;
}
