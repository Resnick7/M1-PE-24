//Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, suma = 0;
	
	cout << "Escribe cuantos numeros quieres sumar: ";
	cin>> n;
	
	for(int i=1;i<=2*n-1;i+=2){
		suma += i;
	}
	
	cout<<"La suma es: "<< suma;
	
	getch();
	
	return 0;
}
