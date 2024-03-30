/*
Pedir al usuario una cadena de caracteres, almacenarla en un
arreglo y copiar todo su ontenido hacia otro arreglo de caracteres
*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char array[100];
	char copy[100];
	
	cout<<"Ingrese una cadena de caracteres que quiera copiar: ";
	cin.getline(array,100);
	
	strcpy(copy,array);
	
	cout<<"Cadena copiada: "<<copy<<endl;
	cout<<"Cadena original: "<<array<<endl;
	
	getch();
	return 0;
}

