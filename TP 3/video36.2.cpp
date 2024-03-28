/*
Realiza un programa que defina una matriz de 3x3 y escriba un
ciclo para que muestre la diagonal principal de la matriz
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[3][3];

	//Almacenando elementos en la matriz
	for (int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
			cin>>numeros[i][j];
		}
	}
	
	//Mostrando la matriz
	for (int i=0; i<3; i++){
		cout<<numeros[i][i];
	}
	
	return 0;
}
