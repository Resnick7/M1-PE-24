/*
En una clase de 5 alumnos se han realizado tres examenes y se requiere
determinar el numero de:
Alumnos que aprobaron todos los examenes
Alumnos que aprobaron al menos un examen
Alumnos que aprobaron el ultimo examen

Realice un programa que permita la lectura de los datos y el calculo de
las estadisticas
*/

#include<iostream>

using namespace std;

int main() {
	int alumnos = 5;
	int aprobadosTodos = 0;
	int aprobadosUno = 0;
	int aprobadosUltimo = 0;
	
	for (int i = 0; i < alumnos; i++) {
		bool examen1, examen2, examen3;
		
		cout << "Ingrese 1 si el alumno " << i + 1 << " aprobo el examen 1, de lo contrario ingrese 0: ";
        cin >> examen1;

        cout << "Ingrese 1 si el alumno " << i + 1 << " aprobo el examen 2, de lo contrario ingrese 0: ";
        cin >> examen2;

        cout << "Ingrese 1 si el alumno " << i + 1 << " aprobo el examen 3, de lo contrario ingrese 0: ";
        cin >> examen3;
        
        if (examen1 && examen2 && examen3) {
        	aprobadosTodos++;
		}
		
		if (examen1 || examen2 || examen3) {
			aprobadosUno++;
		}
		
		if (examen3) {
			aprobadosUltimo++;
		}
	}
	
	cout<<aprobadosTodos<<" alumnos aprobaron todos los examenes, es un "<<(aprobadosTodos*100)/5<<"% de la clase"<<endl;
	cout<<aprobadosUno<<" alumnos aprobaron almenos 1 examen, es un "<<(aprobadosUno*100)/5<<"% de la clase"<<endl;
	cout<<aprobadosUltimo<<" alumnos aprobaron el ultimo examen, es un "<<(aprobadosUltimo*100)/5<<"% de la clase"<<endl;
	return 0;
}
