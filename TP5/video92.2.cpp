/* Realice un programa que lea una matriz din'amica de NxM y cree su matriz transpuesta */

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int **,int,int);

int **puntero_matriz,nFilas,nCol;

int main(){
	pedirDatos();
	mostrarMatriz(puntero_matriz,nFilas,nCol);

	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz[i];
	}
	delete[] puntero_matriz;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Ingrese el numero de filas: ";
	cin>>nFilas;
	cout<<"Ingrese el numero de columnas: ";
	cin>>nCol;
	
	puntero_matriz = new int*[nFilas];
	for(int i=0;i<nFilas;i++){
		puntero_matriz[i] = new int[nCol];
	}
	
	cout<<"\nIngrese datos para la matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Ingrese un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz+i)+j);
		}
	}	
}

void mostrarMatriz(int **puntero_matriz,int nFilas,int nCol){
	cout<<"\nMatriz original: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(puntero_matriz+i)+j)<<" "; 
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz transpuesta: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(puntero_matriz+j)+i)<<" "; 
		}
		cout<<"\n";
	}
}


