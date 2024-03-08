//Comprobar si un número digitado por el usuario es positivo o negativo

#include <iostream>

using namespace std;

int main(){
	int num;
	
	cout << "Ingrese un numero: ";
	cin >> num;
	
	if (num > 0){
		
		cout << "Es un numero positivo";
		
	}
	else if(num == 0){
		cout <<"El numero es 0";
	}
	else {
		cout << "Es un numero negativo";
	}
	
	return 0; 
}
