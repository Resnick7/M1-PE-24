/*Ejercicio 2: Hacer un programa en C++, utilizando Pilas que contenga el siguiente 
menu: 

	1. Insertar un caracter a la pila
	2. Mostrar todos los elementos de la pila
	3. Salir
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;	
};

//Prototipo
void menu();
void agregarPila(Nodo *&,char);
void sacarPila(Nodo *&,char &);
void mostrarPila(Nodo *&,char &);
void calcularMayorMenor(Nodo *);
bool comparar(Nodo *,Nodo *);
bool pilaVacia(Nodo *);
Nodo* crearNodo(Nodo *&);

int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){

	Nodo *pila1 = NULL;
	Nodo *pila2 = NULL;
	int opcion;
	int opcionPila;
	char dato;
	 
	
	do{
		cout<<"\t.:MENU:.\n";
		cout<<"1. Insertar un caracter a la pila 1"<<endl;
		cout<<"2. Insertar un caracter a la pila 2"<<endl;
		cout<<"3. Mostrar todos los elementos de la Pila"<<endl;
		cout<<"4. Comparar ambas Pilas"<<endl;
		cout<<"5. Mostrar el elemento mas grande de una Pila"<<endl;		
		cout<<"6. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1: cout<<"\nDigite un caracter: ";
					cin>>dato;
					agregarPila(pila1,dato);
					break;
			case 2: cout<<"\nDigite un caracter: ";
					cin>>dato;
					agregarPila(pila2,dato);
					break;
			case 3: cout<<"\nMostrando todos los elementos de la pila: \n";
    				cout<<"\nIngreso un 1 para mostrar la Pila 1 o un 2 para mostrar la Pila 2: \n";
					cin>>opcionPila;
					
					if(opcionPila == 1){
						mostrarPila(pila1,dato);  	
					}else if(opcionPila == 2){
						mostrarPila(pila2,dato); 	
					}else{
						cout<<"\nNo Ingreso un número correcto \n";	
					}
					break;
			case 4: cout<<"\nComparamos ambas Pilas: \n";
					if(comparar(pila1,pila2)){
						cout<<"\nExisten datos Repetidos \n"; 	
					}else{
						cout<<"\nNo Existen datos Repetidos \n"; 	
					}
					system("pause");
					break;
			case 5: cout<<"\nMostrando el elemento mas grande de la pila: \n";
    				cout<<"\nIngreso un 1 para mostrar la Pila 1 o un 2 para mostrar la Pila 2: \n";
					cin>>opcionPila;
					
					if(opcionPila == 1){
						calcularMayorMenor(pila1);  	
					}else if(opcionPila == 2){
						calcularMayorMenor(pila2); 	
					}else{
						cout<<"\nNo Ingreso un número correcto \n";	
					}
					break;					
			case 6: break;
		}
		system("cls"); //limpiar pantalla
	}while(opcion != 6);
	
}

void agregarPila(Nodo *&pila,char n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
}

Nodo* crearNodo(Nodo *&pila){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> siguiente = pila;
	pila = nuevo_nodo;

	return pila;
}

void sacarPila(Nodo *&pila,char &n){
	Nodo *aux = pila;
	n = aux->dato;

	if(pilaVacia(pila)){
		pila = NULL;
	}
	else{
		pila = aux->siguiente;
	}
	delete aux;
}

void mostrarPila(Nodo *&pila,char &n){

	while(pila != NULL){
		sacarPila(pila, n); 
		if(pila != NULL){
			cout<<n<<" , ";
		}
		else{
		    cout<<n<<".";	
		}
	}
	cout<<"\n";
	system("pause");
}

bool comparar(Nodo *x,Nodo *y){
        // se copian las pilas a comparar
       int contador = 0;

	   while(x != NULL){
	   	    Nodo *t = new Nodo();
	        t = y;
			while(t != NULL){//mientras no sea el final de la lista
				cout<<" =>"<<(x->dato)<<" =>"<<(t->dato)<<endl;
				if((x->dato) == (t->dato)){//Comprobamos el numero mayor
					contador++;
				}
				t = t->siguiente;
				cout<<" t=>"<<(t != NULL)<<endl;
			}
			x = x->siguiente;
			cout<<" x=>"<<(x != NULL)<<endl;
	   }
        
	   if(contador>0){
            return true;
       }else{
            return false;	
	   }
        
}

//Calcular el menor y mayor elemento de la lista
void calcularMayorMenor(Nodo *lista){
	int mayor=0,menor=99999;
	
	while(lista != NULL){//mientras no sea el final de la lista
		if((lista->dato)>mayor){//Comprobamos el numero mayor
			mayor = lista->dato;
		}
		if((lista->dato)<menor){//Comprobamos el numero menor
			menor = lista->dato;
		}
		lista = lista->siguiente;//Avanzamos en la lista
	}
	
	cout<<"\n\nEl mayor numero es: "<<mayor<<endl;
	cout<<"El menor numero es: "<<menor<<endl;	
	system("pause");
}

bool pilaVacia(Nodo *final){
	return (final == NULL)? true : false; 
}
