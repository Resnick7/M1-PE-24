//Escriba un programa que calcule el valor de: 1+2+3+...+n

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n,suma = 0;
	
	cout << "Ingrese cuantos numeros quiere sumar: ";
	cin >> n;
	
	for(int i=1;i<=n;i++){
		suma += i;
		
	}
	
	cout << "La suma de los numeros es: " << suma;
	
	getch();
	return 0;
	
}
