/*
Pedir una cadena de caracteres (string) al usuario, e indicar cuantas 
veces aparece la vocal a,e,i,o,u; en la cadena de caracteres.
NOTA: Usar punteros
*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

void pedirDatos();
void contarVocales(char *);

char palabraUsuario[30];

int main(){
	pedirDatos();
	contarVocales(palabraUsuario);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite una palabra: ";
	cin.getline(palabraUsuario,30,'\n');
	
	strupr(palabraUsuario);
}

void contarVocales(char *palabra){
	int contA=0,contE=0,contI=0,contO=0,contU=0;
	
	while(*palabra){
		switch(*palabra){
			case 'A': contA++;break;
			case 'E': contE++;break;
			case 'I': contI++;break;
			case 'O': contO++;break;
			case 'U': contU++;break;
		}
		palabra++;
	}
	
	cout<<"\nNumero de vocales A: "<<contA<<endl;
	cout<<"Numero de vocales E: "<<contE<<endl;
	cout<<"Numero de vocales I: "<<contI<<endl;
	cout<<"Numero de vocales O: "<<contO<<endl;
	cout<<"Numero de vocales U: "<<contU<<endl;
}
