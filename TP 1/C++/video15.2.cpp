/*
Escriba un programa que lea de la entrada estandar un caracte e indique
en la salida estandar si el caracter es una vocal minuscula, es un vocal
mayuscula o no es una vocal
*/

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Ingrese un caracter: "; cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minuscula";break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"Es una vocal mayuscula";break;
		default : cout<<"NO es una vocal";break;
	}
	
	return 0;
}
