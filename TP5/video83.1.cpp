#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {1,2,3,4,5};
	int *dir_numeros;
	
	dir_numeros = numeros; //el puntero se iguala a la primera direccion de memoria del array
	
	for (int i=0; i<5;i++){
		cout<<"Posicion de memoria "<<i<<" es: "<<dir_numeros++<<endl;

	}
	
	dir_numeros = numeros;
	
	for (int i=0; i<5;i++){
		cout<<"Valor del array en "<<i<<" es: "<<*dir_numeros++<<endl;
	}


	return 0;
}
