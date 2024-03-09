//Escriba un programa que calcule el factorial de n

#include<iostream>

using namespace std;

int main() {
	int num, factorial = 1;
	
	cout<<"Ingrese un numero para calcular su factorial: "; cin>>num;
	
	for(int i=1; i<=num; i++) {
		factorial *= i;
	}
	
	cout<<"El factorial de "<<num<<" es: "<<factorial<<endl;
	
	return 0;
}
