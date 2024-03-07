/*
La calificacion final de un estudiante es la media ponderada de tres notas:
La nota de prácticas que cuenta un 30% del total
La nota teorica que cuenta un 60%
Y la nota de participacion que cuenta el 10% restante.

Escriba un programa que lea de la entrada estandar las tres notas de un alumno
y escriba en la salida estandar su nota final.
*/

#include<iostream>

using namespace std;

int main(){
	
	float practica, teorica, participacion, total;
	
	cout<<"Ingrese la nota de practica: "; cin>>practica;
	cout<<"Ingrese la nota teorica: "; cin>>teorica;
	cout<<"Ingrese la nota de participacion: "; cin>>participacion;
	
	practica *= 0.30;
	teorica *= 0.60;
	participacion *= 0.10;
	
	total = practica + teorica + participacion;
	
	cout<<"\nLa nota final del alumno es: "<<total<<endl;
	
	return 0;
}
