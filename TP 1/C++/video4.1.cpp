//Escribe un programa que lea de la entrada estándar dos números y muestre en la salida estándar su suma, resta, multimplicación y división

#include<iostream>

using namespace std;

int main() {
	int num1,num2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	cout<<"Ingrese el valor del primer numero: ";
	cin>>num1;
	cout<<"Ingrese el valor del segundo numero: ";
	cin>>num2;
	
	suma = num1 + num2;
	resta = num1 - num2;
	multiplicacion = num1 * num2;
	division = num1 / num2;
	
	cout<<"El resultado de la suma entre los 2 numeros es: "<< suma << endl;
	cout<<"El resultado de la resta entre los 2 numeros es: "<< resta << endl;
	cout<<"El resultado de la multiplcacion entre los 2 numeros es: "<< multiplicacion << endl;
	cout<<"El resultado de la division entre los 2 numeros es: "<< division << endl;
	
	return 0;
	
	}
