/*
Escriba un programa que lea valores enteros hasta que se introduzca un valor
en el rango 20-30 o se introduxca el valor 0. El programa debe entregar 
la suma de los valores mayores a 0 introducidos.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	int num, suma = 0;
	
	do{
		cout<<"Ingrese un numero: "; cin>>num;
		
		if (num>0){
			suma += num;
		}
	} while(((num<20) || (num >30)) && (num != 0));
	
	cout<<"\nLa suma es: "<<suma<<endl;
	
	system("pause");
	
	return 0;
}

