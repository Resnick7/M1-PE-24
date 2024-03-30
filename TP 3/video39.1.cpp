/*
Desarrolar un programa que determine si una matriz es simetrica
o no. Una matriz es simetrica si es cuadrada y si es igual
a su matriz transpuesta
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int numeros[100][100], filas, columnas;
	char band='F';
	
	cout<<"Ingrese el numero de filas: "; cin>>filas;
	cout<<"Ingrese el numero de columnas: "; cin>>columnas;
	
	for (int i=0; i<filas; i++) {
		for (int j=0; j<columnas; j++) {
			cout<<"Ingrese el numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	if(filas==columnas) {
		for(int i=0; i<filas; i++) {
			for(int j=0;j<columnas;j++){
				if(numeros[i][j] == numeros[j][i]) {
					band = 'V';
				}
			}
		}
	}
	
	if (band == 'V') {
		cout<<"La matriz es simetrica";
	}
	else {
		cout<<"La matriz no es simetrica";
	}
	
	getch();
	return 0;
}
