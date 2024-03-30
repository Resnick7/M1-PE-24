//Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar todo su contenido hacia otra matriz

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int nums[2][2] = {{1,2},{3,4}};
	int matriz[2][2];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			matriz[i][j] = nums[i][j];
		}
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << matriz[i][j];
		}
		cout << "\n";
	}	
	getch();
	return 0;
}
