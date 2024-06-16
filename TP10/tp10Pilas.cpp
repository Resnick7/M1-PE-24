#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
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
void insertarCliente(Nodo *&, Cliente);
void mostrarPila(Nodo *);
void buscarCliente(Nodo*, int);
void buscarEdadRepetida(Nodo *, Nodo *);
void buscarDniMayor(Nodo *);
bool pilaVacia(Nodo *);

int main() {
    menu();
    getch();
    return 0;
}

void menu() {
    Nodo *pila1 = NULL;
    Nodo *pila2 = NULL;
    int opcion;
    Cliente cliente;

    do {
        cout << "\t.:MENU:.\n";
        cout << "1. Cargar cliente en pila 1\n";
        cout << "2. Cargar cliente en pila 2\n";
        cout << "3. Mostrar clientes de ambas pilas\n";
        cout << "4. Buscar el DNI mayor de ambas pilas\n";
        cout << "5. Comparar edades de ambos clientes\n";
        cout << "6. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nIngrese los datos del cliente:\n";
                cout << "Nombre: ";
                cin >> cliente.nombre;
                cout << "DNI: ";
                cin >> cliente.dni;
                cout << "Edad: ";
                cin >> cliente.edad;
                agregarCliente(pila1, cliente);
                break;
            case 2:
                cout << "\nIngrese los datos del cliente:\n";
                cout << "Nombre: ";
                cin >> cliente.nombre;
                cout << "DNI: ";
                cin >> cliente.dni;
                cout << "Edad: ";
                cin >> cliente.edad;
                agregarCliente(pila2, cliente);
                break;
            case 3:
                cout << "\nMostrando clientes de ambas pilas:\n";
                cout << "Pila 1:\n";
                mostrarClientes(pila1);
                cout << "Pila 2:\n";
                mostrarClientes(pila2);
                break;
            case 4:
                cout << "\nBuscando el DNI mayor de ambas pilas...\n";
                cout << "El DNI mayor es: " << buscarDniMayor(pila1, pila2) << endl;
                break;
            case 5:
                cout << "\nComparando edades de ambos clientes...\n";
                if (compararEdades(pila1, pila2)) {
                    cout << "Existen edades repetidas.\n";
                } else {
                    cout << "No existen edades repetidas.\n";
                }
                break;
            case 6:
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
        }
        system("pause");
        system("cls");
    } while (opcion != 6);
}

void agregarCliente(Nodo *&pila, Cliente cliente) {
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->cliente = cliente;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}

void mostrarClientes(Nodo *pila) {
    Nodo *aux = pila;
    while (aux != NULL) {
        Cliente cliente = aux->cliente;
        cout << "Nombre: " << cliente.nombre << ", DNI: " << cliente.dni << ", Edad: " << cliente.edad << endl;
        aux = aux->siguiente;
    }
}

string buscarDniMayor(Nodo *pila1, Nodo *pila2) {
    string dniMayor = "";
    Nodo *aux1 = pila1;
    Nodo *aux2 = pila2;
    while (aux1 != NULL) {
        if (aux1->cliente.dni > dniMayor) {
            dniMayor = aux1->cliente.dni;
        }
        aux1 = aux1->siguiente;
    }
    while (aux2 != NULL) {
        if (aux2->cliente.dni > dniMayor) {
            dniMayor = aux2->cliente.dni;
        }
        aux2 = aux2->siguiente;
    }
    return dniMayor;
}

bool compararEdades(Nodo *pila1, Nodo *pila2) {
    Nodo *aux1 = pila1;
    Nodo *aux2 = pila2;
    while (aux1 != NULL) {
        int edad1 = aux1->cliente.edad;
        while (aux2 != NULL) {
            int edad2 = aux2->cliente.edad;
            if (edad1 == edad2) {
                return true;
            }
            aux2 = aux2->siguiente;
        }
        aux1 = aux1->siguiente;
    }
    return false;
}

bool pilaVacia(Nodo *pila) {
    return (pila == NULL) ? true : false;
}
