/*
Realice un programa que lea de la entrada estandar numeros hasta que se 
introduzca un cero. En ese momento el programa debe terminar y mostrar
en la salida estandar el numero de valores mayores que cero leidos
*/

#include<iostream>

using namespace std;

int main () {
	int num,i;
	i=-1;
	
	do{
		cout<<"Ingrese un numero: "; cin>>num;
		i+=1;
	} while (num != 0);
	
	cout<<"Ingreso "<<i<<" numeros mayores a 0";
	
	return 0;
}
