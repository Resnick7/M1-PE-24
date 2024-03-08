// Escriba un programa que calcule el valor de: 2^1+2^2+2^3+....2^n

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){
	int n, suma = 0, elevacion = 0;
	
	cout << "Escribe el numero de elementos que quieres sumar: ";
	cin >> n;
	
	for(int i=1;i<=n;i++){
		elevacion = pow(2,i);
		suma += elevacion;
	}
	
	cout << "El resultado de la suma es: " << suma;
	
	return 0;
	
}
