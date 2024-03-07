//Escribe una expresion matematica como expresion en C++

#include<iostream>

using namespace std;

int main(){
	
	float a,b,c,d, resultado =0;
	
	cout<<"Ingrese la variable a: "; cin>>a;
	cout<<"Ingrese la variable b: "; cin>>b;
	cout<<"Ingrese la variable c: "; cin>>c;
	cout<<"Ingrese la variable d: "; cin>>d;
	
	resultado = a+(b/(c-d));
	
	cout<<"\nEl resutlado de calcular a+(b/(c-d)) es: "<<resultado<<endl;
	
	return 0;
}
