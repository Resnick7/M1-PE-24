//Realice un programa que calcule el valor que toma la siguiente función para unos valores dados de x e y

#include <iostream>
#include<math.h>

using namespace std;

int main(){
	float x, y, resultado = 0;
	
	cout << "Ingrese el valor de x: ";
	cin >> x;
	cout << "Ingrese el valor de y: ";
	cin >> y;
	
	resultado = ( sqrt (x))/( pow(y,2) -1);
	
	cout << "El resultado es: "<< resultado;
	
}
