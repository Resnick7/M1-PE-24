/*Ejercicio 2:  Determinar si un n�mero es primo o no; con puteros y adem�s indicar en
que posicion de memoria se guardo el n�mero.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero,*dir_num,cont=0;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	dir_num = &numero;
	
	for(int i=1;i<*dir_num;i++){
		if(*dir_num%i == 0){
			cont++;
		}
	}
	
	if(cont>2){
		cout<<"El numero "<<*dir_num<<" NO es primo"<<endl;
	}
	else{
		cout<<"El numero "<<*dir_num<<" ES PRIMO"<<endl;
		cout<<"Direccion: "<<dir_num<<endl;
	}
	
	
	getch();
	return 0;
}
