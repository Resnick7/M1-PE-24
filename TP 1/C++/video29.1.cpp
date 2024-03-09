//Realice un programa que solicite al usuario que piense un número entero entre el 1 y EL 100. 
//El programa debe generar un número aleatorio en ese mismo rango[1-100], e indicarle al usuariosi el número que digitó es menor o mayor al número aleatorio, así hasta que lo adivine, y por ultimo mostrarle el número de intentos que le llevo.

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int num, dato, intentos = 0;
	
	srand(time(NULL));
	dato = 1 + rand()%(100);
	
	do{
		cout << "Ingrese un numero: ";
		cin >> num;
		
		if(num > dato){
			cout << "Debe ser un numero menor" << endl;
			cin >> num;
		}
		if(num < dato){
			cout << "Debe ser un numero mayor" << endl;
	    }
	    intentos++;
	}while(num != dato);
	
	cout << "Adivinaste el numero" << endl;
	cout << "Numero de intentos: " << intentos;
	
	return 0;
	
}
