// Longitud de una cadena de caracteres - Funci�n sterlen()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "hola";
	int longitud=0;
	
	longitud = strlen(palabra);
	
	cout << "Numero de elementos de la cadena es: " << longitud << endl;
	
	getch();
	return 0; 
}
