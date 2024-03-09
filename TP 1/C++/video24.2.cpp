/*
Escriba un programa que calcule x^y, donde tanto x como y son enteros
positivos, sin utilizar la funcion pow
*/

#include<iostream>

using namespace std;

int main() {
	int x,y,pow;
	
	cout<<"Ingrese el numero y la potencia que quiere calcular: \n"; cin>>x>>y;
	
	if(y == 0){
		cout<<"Potencia de "<<x<<"^0 = 1";
	}
	
	pow = 1;
	
	for(int i = 0; i < y; i++){
		pow *= x;
	}
	
	cout<<"La potencia de "<<x<<"^"<<y<<" es: "<<pow;
	return 0;
}
