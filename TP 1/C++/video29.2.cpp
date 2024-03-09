//Realice un programa que calcule la descomposición en factores primos de un número entero.

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int num;
	
	cout << "Ingrese un numero: "; 
	cin >> num;
	
	cout << "Descomposicion en factores primos: ";
	
	for(int i=2;num>1;i++){
		while(num%i==0){
			cout <<i << " ";
			num /= i;
		}
	}

	return 0;
}
