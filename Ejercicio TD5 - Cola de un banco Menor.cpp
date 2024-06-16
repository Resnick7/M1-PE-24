/*Ejercicio 2: Hacer un programa que guarde datos de clientes de un banco, los almacene
en cola, y por ultimo muestre los clientes en el orden correcto.*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Cliente{
	char nombre[30];
	char clave[10];
	int dni;
	int edad;
};

struct Nodo{
	Cliente c;
	Nodo *siguiente;	
};

//Prototipos de Funciones
void menu();
void cargar_cliente(Cliente &);
void insertarCola(Nodo *&,Nodo *&,Cliente);
bool cola_vacia(Nodo *);
void calcularMayorMenor(Nodo *&,Nodo *&,Cliente &);
void suprimirCola(Nodo *&,Nodo *&,Cliente &);

int main(){
    
	menu();
		
	getch();
	return 0;
}

void menu(){
	int opc;
	Cliente c;
	
	Nodo *frente = NULL;
	Nodo *fin = NULL;

	do{
		cout<<"\t.:MENU:.\n";
		cout<<"1. Insertar un cliente a una cola"<<endl;
		cout<<"2. Mostrar todos los elementos de la cola"<<endl;
		cout<<"3. CALCULAR cual es el menor elemento de una Cola"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opc; 
		
		switch(opc){
			case 1: cout<<"\nIngrese el cliente para agregar a la cola: ";

					cargar_cliente(c); //Cargamos cliente
					insertarCola(frente,fin,c);
					cout<<"\n\n=== Carga de Clientes Exitosa ===\n\n";
					break;
			case 2: cout<<"\nMostrando los elementos de la cola: ";

					while(frente != NULL){//Vaciando la cola
						suprimirCola(frente,fin,c);
						//Mostrando todos los clientes agregados
						cout<<"Nombre: "<<c.nombre<<endl;
						cout<<"Clave: "<<c.clave<<endl;
						cout<<"Edad: "<<c.edad<<endl;
						cout<<"\n";		
					}
					cout<<"\n";
					system("pause");
					break;
			case 3: cout<<"\nMostrando el menor elemento de la cola: ";
					calcularMayorMenor(frente,fin,c);
					cout<<"\n";
					system("pause");
			        break;
			case 4: break;
		}
		system("cls");
	}while(opc != 4);
}

void cargar_cliente(Cliente &c){
	fflush(stdin);
	cout<<"\tAgregando un Nuevo Cliente"<<endl;
	
	cout<<"Nombre: "; 
	cin.getline(c.nombre,30,'\n');
	
	cout<<"Clave: "; 
	cin.getline(c.clave,10,'\n');
	
	cout<<"Edad: "; 
	cin>>c.edad;
	
	cout<<"\n";
} 

void insertarCola(Nodo *&frente,Nodo *&fin,Cliente c){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->c = c;
	nuevo_nodo->siguiente = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}
	
	fin = nuevo_nodo;
}

bool cola_vacia(Nodo *frente){
	return (frente == NULL)? true : false;
}

void calcularMayorMenor(Nodo *&frente,Nodo *&fin,Cliente &c){
	
	int v[30];
	int i=0;
	
	
	while(frente!=NULL){
		c = frente->c;
		//cout<<"El menor elemento de la cola es: "<<c.edad<<" ,"<<endl;
		v[i]=c.edad;
		frente = frente->siguiente;
		i++;
	}
	
	int a[i];
	
	for(int j=0; j<i; j++){
		a[j]=v[j];
	}
	
	int aux;
	
	for(int j=0; j<=i; j++){
		for(int k=0; k<i-1; k++){
			if(a[k]>a[k+1]){
				aux=a[k];
				a[k]=a[k+1];
				a[k+1]=aux;
			}
		}
	}
	
	cout<<"El menor elemento de la cola es: "<<a[0]<<" y el mayor es : "<<a[i-1]<<endl;
}

void suprimirCola(Nodo *&frente,Nodo *&fin,Cliente &c){
	c = frente->c;
	Nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->siguiente;
	}
	
	delete aux;
}
