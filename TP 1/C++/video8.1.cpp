//Escriba un fragmento de programa que intercambie los valores de dos variables

#include <iostream>

using namespace std;

int main(){
	int x,y,aux;
	
	cout << "Ingresa el valor de x: ";
	cin >> x;
	cout << "Ingresa el valor de y: ";
	cin >> y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout << "x ahora vale: " << x << endl;
	cout << "y ahora vale: " << y << endl;
	
	return 0;
	
}
