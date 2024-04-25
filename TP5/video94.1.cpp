/*Hacer una estructura llamada alumno, en la cual se tendrán los siguientes 
Campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3], *puntero_alumno = alumno;

void pedirDatos();
void mejorPromedio(Alumno *);

int main(){
	pedirDatos();	
    mejorPromedio(puntero_alumno);
	
	getch();
	return 0;
}

void pedirDatos(){
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Ingrese el nombre del alumno " << i+1 <<": ";
		cin.getline((puntero_alumno+i)->nombre,30,'\n');
		cout<<"Ingrese la edad: ";
		cin>>(puntero_alumno+i)->edad;
		cout<<"Ingrese el promedio: ";
		cin>>(puntero_alumno+i)->promedio;
		cout<<"\n";
	}
}

void mejorPromedio(Alumno *puntero_alumno){
	float mayor = 0.0;
	int pos=0;
	
	for(int i=0;i<3;i++){
		if((puntero_alumno+i)->promedio > mayor){
			mayor = (puntero_alumno+i)->promedio;
			pos = i;
		}
	}
		
	cout<<"\nAlumno con el mejor promedio: "<<endl;
	cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
	cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
	cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;	
}
