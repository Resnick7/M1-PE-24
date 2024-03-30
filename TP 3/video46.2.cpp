/*
Convertir dos cadenas de minusculas a MAYUSCULAS. Compararlas,
y decir si son iguales o no.
*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char palabra[] = "alejandro";
	char palabra2[100];
	
	cout<<"Ingrese una cadena de caracteres en minuscula: ";
	cin.getline(palabra2,100);
	
	strupr(palabra);
	strupr(palabra2);
	
	if (strcmp(palabra, palabra2) == 0) {
		cout<<"Las palabras son iguales\n";
	}
	else {
		cout<<"Las palabras no son iguales\n";
	}
	
	cout<<palabra<<endl;
	cout<<palabra2<<endl;
	
	getch();
	return 0;
}
