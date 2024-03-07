/* 
Escriba un programa que lea de la entrada estandar los dos catetos
de un triangulo rectangulo y escriba en la salida estandar su hipotenusa.
*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float c1,c2,hipotenusa;
	
	cout<<"Ingrese el valor de un cateto: "; cin>>c1;
	cout<<"Ingrese el valor del otro cateto: "; cin>>c2;
	
	hipotenusa = sqrt(pow(c1,2)+pow(c2,2));

	cout<<"\nLa hipotenusa del triangulo rectangulo es: "<<hipotenusa<<endl;
		
	return 0;
}
