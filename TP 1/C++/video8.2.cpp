//Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos.

#include <iostream>

using namespace std;

int main(){
	float notaAlumno1, notaAlumno2, notaAlumno3, notaAlumno4, notaMedia = 0;
	
	cout << "Ingresa la nota del alumno 1: ";
	cin >> notaAlumno1;
	cout << "Ingresa la nota del alumno 2: ";
	cin >> notaAlumno2;
	cout << "Ingresa la nota del alumno 3: ";
	cin >> notaAlumno3;
	cout << "Ingresamla nota del alumno 4: ";
	cin >> notaAlumno4;
	
	notaMedia = (notaAlumno1 + notaAlumno2 + notaAlumno3 + notaAlumno4) / 4;
	
	cout << "La nota final media de los cuatro alumnos es: " << notaMedia;
	
	return 0;
		
}
