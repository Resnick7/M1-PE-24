#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
using namespace std;

struct Cliente {
    string nombre;
    int dni;
    int edad;
};

struct Nodo {
    Cliente c;
    Nodo* siguiente;
};

void menu();
void cargarCliente(Cliente &);
void insertarCliente(Nodo*&, Cliente);
void mostrarLista(Nodo*);
void buscarCliente(Nodo*, Cliente);
void eliminarLista(Nodo *&, Cliente &);
void buscarEdadRepetida(Nodo*, Nodo*);
void buscarMayorDni(Nodo*&);

Nodo *lista1 = NULL;
Nodo *lista2 = NULL;

int main() {
    menu();
    getch();
    return 0;
}

void menu() {
    int opcion;
    Cliente cliente;

    do {
        cout << "\t.:MENU:.\n";
        cout << "1. Insertar cliente a la primer lista\n";
        cout << "2. Insertar cliente a la segunda lista\n";
        cout << "3. Mostrar los clientes de las listas\n";
        cout << "4. Comprobar si hay edades repetidas entre listas\n";
        cout << "5. Buscar mayor DNI de cada lista\n";
        cout << "6. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
            	cout<<"\tAgregando un Nuevo Cliente  a lista 1"<<endl;
                cargarCliente(c);
                insertarCliente(lista1, c);
                cout << "\n";
                system("pause");
                break;
            case 2:
            	cout<<"\tAgregando un Nuevo Cliente  a lista 2"<<endl;
            	cargarCliente(c);
            	insertarCliente(lista2, c);
            	cout << "\n";
                system("pause");
                break;
            case 3:
            	cout<<"\tLista 1: ";
                mostrarLista(lista1);
                cout<<"\tLista 2: ";
                mostrarLista(lista2);
                cout << "\n";
                system("pause");
                break;
            case 4:
            	//Buscar edades repetidas
                cout << "\tBuscando edades repetidas... \n";
                buscarEdadRepetida(lista1, lista2);
                cout << "\n";
                system("pause");
                break;
            case 5:
            	//Mayor DNI de ambas listas
            	cout<<"El mayor DNI de la lista 1 es: ";
                calcularMayorDni(lista1);
                cout<<"El mayor DNI de la lista 2 es: ";
                calcularMayorDni(lista2);
                cout << "\n";
                system("pause");
                break;
        }
        system("cls");
    } while (opcion != 6);
}

void cargarCliente(Cliente &c){
	fflush(stdin);
	cout<<"Nombre: ";
	getline(cin,c.nombre);
	cout<<"DNI: ";
	cin>>c.dni;
	cout<<"Edad: ";
	cin>>c.edad;
	cout<<"\n";
}

void insertarCliente(Nodo*& lista, Cliente c) {
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->c = c;
    nuevo_nodo->siguiente = NULL;

    if (lista == NULL) {
        lista = nuevo_nodo;
    } else {
        Nodo* aux1 = lista;
        Nodo* aux2 = NULL;

        while ((aux1 != NULL) && (aux1->c.dni < c.dni)) {
            aux2 = aux1;
            aux1 = aux1->siguiente;
        }

        if (lista == aux1) {
            lista = nuevo_nodo;
        } else {
            aux2->siguiente = nuevo_nodo;
        }

        nuevo_nodo->siguiente = aux1;
    }

    cout << "\tElemento con DNI: " << c.dni << " insertado a lista correctamente\n";
}

void mostrarLista(Nodo* lista) {
    Nodo* actual = lista;
    while (actual != NULL) {
        cout << "Nombre: " << actual->c.nombre << " -> DNI: " << actual->c.dni << " -> Edad: " << actual->c.edad << endl;
        actual = actual->siguiente;
    }
}

void buscarEdadesRepetidas(Nodo* lista1, Nodo* lista2) {
    bool encontrado = false;
    Nodo* actual1 = lista1;
    Nodo* actual2 = lista2;

    while (actual1 != NULL) {
        while (actual2 != NULL){
        	if (actual1->c.edad == actual2->c.edad) {
            encontrado = true;
            cout<<"\tSe repite la edad: "<<actual1->c.edad<<endl;
            break;
			}
			actual2 = actual2->siguiente;
        }
        actual1 = actual1->siguiente;
    }

    encontrado ? cout<<"Busqueda completada" : cout<<"No se repiten edades";
}

void calcularMayorDni(Nodo *&lista){
	if(lista == NULL){
		cout<<"La lista esta vacia"<<endl;
		return;
	}

	Nodo* actual = lista;
	int mayorDni = 0;

	while (actual != NULL) {
        if (actual->c.dni > mayorDni) {
            mayorDni = actual->c.dni;
        }
        actual = actual->siguiente;
    }

    cout << mayorDni <<endl;

}

