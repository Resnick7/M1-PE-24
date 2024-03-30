//Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla de números aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla.

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	
	int matriz1[100][100],filas,columnas;
	int matriz2[100][100],dato=0;
	
	cout<<"Ingrese numero de filas: "; cin>>filas;
	cout<<"Ingrese numero de columnas: "; cin>>columnas;
	
	srand(time(NULL));
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			dato = 1+rand()%(100);
			matriz1[i][j] = dato;
		}
	}
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			matriz2[i][j] = matriz1[i][j];
		}
	}

	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz2[i][j]<<"  ";
		}
		cout<<"\n";
	}
	
	system("pause");
	return 0;
	
}
