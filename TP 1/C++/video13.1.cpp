/*
Escriba un programa que lea dos numeros y determine cual de ellos es mayor
*/

#include <iostream>

using namespace std;

int main(){
	int n1,n2;
	
	cout<<"Ingrese los numeros a comparar: "<<endl; cin>>n1>>n2;
	
	if(n1==n2){
		cout<<"Ambos numeros son iguales!";
	}
	else if (n1>n2){
		cout<<"\nEl mayor es: "<<n1;
	}
	else{
		cout<<"\nEl mayor es: "<<n2;
	}
	
	return 0;
}
