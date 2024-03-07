/*
Escriba un programa que lea tres numeros y determine cual de ellos es mayor
*/

#include <iostream>

using namespace std;

int main(){
	int n1,n2,n3,mayor;
	
	cout<<"Ingrese los numeros a comparar: "<<endl; cin>>n1>>n2>>n3;
	
	if(n1 == n2 && n2 == n3){
		cout<<"\nLos numeros son iguales!";
		mayor = n1;
	}
	else if (n1 > n2 && n1 > n3){
		mayor = n1;
	}
	else if (n2 > n3){
		mayor = n2;
	}
	else {
		mayor =n3;
	}
	
	cout<<"\nEl numero mayor es: "<<mayor;
	
	return 0;
}
