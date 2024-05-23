/*
En este Ejercicio deben crear 2 LISTAS.
EN TODOS LOS CASOS deben crear un menu que permita ingresar dinamicamente el llenado de las mismas.
Y siempre deben existir estructuras de tipo CLIENTE (nombre, dni, edad)
comparar una cola con la otra y decirme si hay edades REPETIDAS.
Luego de eso deben crear otra funcion que me permita decir el MAYOR DNI de cada estructura.

*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std;

struct Cliente {
    int dni;
    string nombre;
    int edad;
};

struct Nodo {
    Cliente c;
    Nodo* siguiente;
};

void menu();
Cliente cargarCliente();
void insertarCliente(Nodo*&, Cliente);
void mostrarLista(Nodo*);
void buscarCliente(Nodo*, int);
void eliminarCliente(Nodo*&, int);
void eliminarLista(Nodo*&);

Nodo* lista = NULL;

int main() {
    menu();
    getch();
    return 0;
}

void menu() {
    int opcion, dato;

    do {
        cout << "\t.:MENU:.\n";
        cout << "1. Insertar cliente a la lista\n";
        cout << "2. Mostrar los clientes de la lista\n";
        cout << "3. Buscar un cliente en la lista\n";
        cout << "4. Eliminar un cliente de la lista\n";
        cout << "5. Vaciar lista\n";
        cout << "6. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                Cliente c = cargarCliente();
                insertarCliente(lista, c);
                cout << "\n";
                system("pause");
                break;
            }
            case 2:
                mostrarLista(lista);
                cout << "\n";
                system("pause");
                break;
            case 3:
                cout << "\nDigite el DNI a buscar: ";
                cin >> dato;
                buscarCliente(lista, dato);
                cout << "\n";
                system("pause");
                break;
            case 4:
                cout << "\nDigite el DNI del cliente que desea eliminar: ";
                cin >> dato;
                eliminarCliente(lista, dato);
                cout << "\n";
                system("pause");
                break;
            case 5:
                eliminarLista(lista);
                cout << "\n";
                system("pause");
                break;
        }
        system("cls");
    } while (opcion != 6);
}

Cliente cargarCliente() {
    Cliente c;
    cout << "\nIngrese el nombre del cliente: ";
    cin.ignore();
    getline(cin, c.nombre);
    cout << "\nIngrese el dni del cliente: ";
    cin >> c.dni;
    cout << "\nIngrese la edad del cliente: ";
    cin >> c.edad;

    return c;
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

    cout << "\tElemento " << c.dni << " insertado a lista correctamente\n";
}

void mostrarLista(Nodo* lista) {
    Nodo* actual = lista;
    while (actual != NULL) {
        cout << "Nombre: " << actual->c.nombre << " -> DNI: " << actual->c.dni << " -> Edad: " << actual->c.edad << endl;
        actual = actual->siguiente;
    }
}

void buscarCliente(Nodo* lista, int dni) {
    bool encontrado = false;
    Nodo* actual = lista;

    while ((actual != NULL) && (actual->c.dni <= dni)) {
        if (actual->c.dni == dni) {
            encontrado = true;
            break;
        }
        actual = actual->siguiente;
    }

    if (encontrado) {
        cout << "Cliente encontrado: " << actual->c.nombre << ", DNI: " << actual->c.dni << ", Edad: " << actual->c.edad << endl;
    } else {
        cout << "Cliente no encontrado.\n";
    }
}

void eliminarCliente(Nodo*& lista, int dni) {
    if (lista != NULL) {
        Nodo* aux_borrar = lista;
        Nodo* anterior = NULL;

        while ((aux_borrar != NULL) && (aux_borrar->c.dni != dni)) {
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;
        }

        if (aux_borrar == NULL) {
            cout << "El elemento no existe\n";
        } else if (anterior == NULL) {
            lista = lista->siguiente;
            cout << "Elemento " << aux_borrar->c.dni << " eliminado\n";
            delete aux_borrar;
        } else {
            anterior->siguiente = aux_borrar->siguiente;
            cout << "Elemento " << aux_borrar->c.dni << " eliminado\n";
            delete aux_borrar;
        }
    } else {
        cout << "La lista esta vacia\n";
    }
}

void eliminarLista(Nodo*& lista) {
    Nodo* aux = NULL;
    while (lista != NULL) {
        aux = lista;
        lista = aux->siguiente;
        cout << "Elemento " << aux->c.dni << " eliminado\n";
        delete aux;
    }
}

