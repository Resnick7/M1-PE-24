//Escribe un programa que lea de la entrada estándar tres números. Después debe leer un cuarto número e indicar si el número coincide con alguno de los introducidos con anterioridad

#include <iostream>

using namespace std;

int main(){
	float num1, num2, num3, num4;
	
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "Ingrese el segundo numero: ";
	cin >> num2;
	cout << "Ingrese el tercer numero: ";
	cin >> num3;
	cout << "Ingrese el cuarto numero: ";
	cin >> num4;
	
	
	if (num1 == num4 ){
		cout  << "El cuarto numero coincide con el primer numero";
	}
	else if (num2 == num4) {
		cout << "El cuarto numero coincide con el segundo numero";
	}
	else if (num3 == num4) {
		cout << "El cuarto numero coincide con el tercer numero";
	}
	else {
		cout << "El cuarto numero no coincide con ninguno de los numeros anteriores";
	}
	
	return 0;
}
