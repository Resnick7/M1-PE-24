/*
Realice un programa que calcule el producto de dos matrices
cuadradas de 3x3
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int M1[3][3]={{1,2,0},{2,-1,-1},{3,2,3}};
	int M2[3][3]={{2,1,1},{-1,1,3},{1,2,4}};
	int M3[3][3];
	
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			cout<<"Ingrese el numero ["<<i<<"]["<<j<<"] de la matriz 1: ";
			cin>>M1[i][j];
			cout<<"Ingrese el numero ["<<i<<"]["<<j<<"] de la matriz 2: ";
			cin>>M2[i][j];
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			M3[i][j]=0;
			for(int k=0;k<3;k++){
				M3[i][j] = M3[i][j] + M1[i][k]*M2[k][j];
			}
		}
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<M3[i][j]<<"  ";
		}
		cout<<"\n";
	}	
	
	getch();
	return 0;
}
