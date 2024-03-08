// Hacer un programa que simule un cajero automático con un saldo inicial de 1000 dólares.

#include <iostream>

using namespace std;

int main(){
	int saldoInicial = 1000, opc;
	float ingresarDinero, sacarDinero, saldo = 0;
	
	cout << "Que quieres hacer?"<< endl;
	cout << "1. Ingresar dinero"<< endl;
	cout << "2. Sacar dinero"<< endl;
	cout << "3. Salir"<< endl;
	cout << "Opcion: ";
	cin >> opc;
	
	switch(opc){
		case 1:
			cout << "Escribe la cantidad de dinero que queres ingresar: ";
			cin >> ingresarDinero;
			saldo = saldoInicial + ingresarDinero;
			cout << "Dinero actual: " << saldo;
			break;
		case 2:
			cout << "Escribe la cantidad de dinero que quieres sacar: ";
			cin >> sacarDinero;
			if (sacarDinero > saldoInicial){
				cout << "No tiene esa cantidad de dinero";
			}
			else {
				saldo = saldoInicial - sacarDinero;
			cout << "Dinero actual: " << saldo;
			}
		case 3: break;
		
	}
	
	
	return 0;
}
