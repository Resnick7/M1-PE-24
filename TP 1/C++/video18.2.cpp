//Hacer un menú que considere las siguientes opciones:
//Caso 1: Cubo de un número
//Caso 2: Número par o impar
//Caso 3: salir

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int opc, num, cubo;
	
	cout << "Ingresa un numero: "<<endl;
	cin >> num;
	cout << "Que quieres hacer con ese numero?"<< endl;
	cout << "1. Saber el valor del numero al cubo"<< endl;
	cout << "2. Saber si es par o impar"<< endl;
	cout << "3. Salir"<< endl;
	cout << "Opcion: ";
	cin >> opc;
	
	switch(opc){
		case 1:
			cubo = (pow(num,3));
			cout << "El valor de " << num << " al cubo es: " << cubo;
			break;
		case 2:
			if (num%2 == 0){
			cout << "Es un numero par";
			}
			else {
			cout << "Es un numero impar";
			}
		case 3: break;
		
	}
	
	
	return 0;
}
