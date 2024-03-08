//Realice un programa que lea un valor entero y determine si se trata de un número par o impar

#include <iostream>

using namespace std;

int main(){
	int num;
	
	cout << "Ingrese un numero: ";
	cin >> num;
	
	if (num%2 == 0){
		
		cout << "Es un numero par";
		
	}
	else {
		cout << "Es un numero impar";
	}
	
	return 0; 
}
