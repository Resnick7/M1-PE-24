/*Asignacion dinamica de arreglos

new: reserva el numero de bytes solicitado por la declaraacion
delete: librea un bloque de bytes reservado con anterioridad
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>//Funciona new y delete

using namespace std;

//Prototipo de Funcion: Firma o nombre del metodo
void pedirNotas();
void mostrarNotas();

int numCalif, *calif; //Variable global, dura en todo el sistema

int main(){
	pedirNotas();
	mostrarNotas();
	
	delete[] calif; //liberamos el espacio en bytes utilizando anteriormente

	getch();
	return 0;
}
//Si escribimos el metodo antes del main no necesitamos escribir la firma
void pedirNotas(){
	cout<<"Ingrese el numero de calificaciones: ";
	cin>>numCalif;
	
	calif = new int[numCalif]; //Creamos el arreglo dinamico, es un arreglo sin nombre, tiene tamanio. Un puntero nos permite manipular un arreglo sin nombre
	
	for(int i=0; i<numCalif; i++){
		cout<<"Ingrese una nota: ";
		cin>>calif[i];
	}

}

void mostrarNotas(){
	cout<<"\n\nMostrando notas del ususario:\n";
	
	for(int i=0; i<numCalif; i++){
		cout<<calif[i]<<endl;
	}
}
