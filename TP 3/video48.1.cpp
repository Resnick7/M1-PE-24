// Tranformar una cadena a numeros - Función atoi() y atof()

#include<iostream>
#include<conio.h>
#include<stdlib.h>


using namespace std;

int main(){
	char cad[] = "123.456";
	float num;
	
	num = atof(cad);
	
	cout << num << endl;
	
	getch();
	return 0;
}
