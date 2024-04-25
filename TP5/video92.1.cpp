/*Realice un programa que calcule la suma de 2 matrices dinámicas. */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void sumarMatrices(int **, int **, int,int);
void mostrarMatrizResultante(int **,int,int);

int **puntero_matriz1, **puntero_matriz2, nFilas, nCol;

int main(){
	pedirDatos();
	sumarMatrices(puntero_matriz1,puntero_matriz2,nFilas,nCol);
	mostrarMatrizResultante(puntero_matriz1,nFilas,nCol);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de filas: ";
	cin>>nFilas;
	cout<<"Digite el numero de columnas: ";
	cin>> nCol;
	
	puntero_matriz1 = new int*[nFilas];
	for(int i=0;i<nFilas;i++){
		puntero_matriz1[i] = new int[nCol];
	}
	
	cout<<"\nDigite los elementos de la primer matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz1+i)+j);
		}
	}
	
	puntero_matriz2 = new int*[nFilas];
	for(int i=0;i<nFilas;i++){
		puntero_matriz2[i] = new int[nCol];
	}
	
	cout<<"\nDigite los elementos de la segunda matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz2+i)+j);
		}
	}
	
	
	
}


void sumarMatrices(int **puntero_matriz1, int **pubtero_matriz2, int nFilas, int nCol){
	for(int i=0; i<nFilas; i++){
		for(int j=0;j<nCol;j++){
			*(*(puntero_matriz1+i)+j) += *(*(puntero_matriz2+1)+j);
		}
	}
}

void mostrarMatrizResultante(int **puntero_matriz1, int nFilas, int nCol){
	cout<<"\nLa suma de las 2 matrices es: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(puntero_matriz1+1)+j)<<" ";
		}
		cout<<"\n";
	}
}
