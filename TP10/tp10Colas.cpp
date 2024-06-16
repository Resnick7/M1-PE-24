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
    Cliente cliente;
    Nodo* siguiente;
};

struct Cola {
    Nodo* frente;
    Nodo* final;
};

void inicializarCola(Cola& cola);
void encolar(Cola& cola, const Cliente& cliente);
Cliente desencolar(Cola& cola);
bool esVacia(const Cola& cola);

void llenarCola(Cola& cola);
void compararEdades(const Cola& cola1, const Cola& cola2);
int mayorDNI(const Cola& cola);

int main() {
    Cola cola1, cola2;
    inicializarCola(cola1);
    inicializarCola(cola2);
    int opcion;

    do {
        cout << "\nMenu:\n";
        cout << "1. Llenar cola 1\n";
        cout << "2. Llenar cola 2\n";
        cout << "3. Comparar edades entre las dos colas\n";
        cout << "4. Encontrar mayor DNI en cola 1\n";
        cout << "5. Encontrar mayor DNI en cola 2\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                llenarCola(cola1);
                break;
            case 2:
                llenarCola(cola2);
                break;
            case 3:
                compararEdades(cola1, cola2);
                break;
            case 4:
                cout << "El mayor DNI en la cola 1 es: " << mayorDNI(cola1) << endl;
                break;
            case 5:
                cout << "El mayor DNI en la cola 2 es: " << mayorDNI(cola2) << endl;
                break;
            case 6:
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    } while (opcion != 6);

    return 0;
}

void inicializarCola(Cola& cola) {
    cola.frente = new Nodo();
    cola.frente->cliente.edad = -1;
    cola.frente->siguiente = cola.frente;
    cola.final = cola.frente;
}

void encolar(Cola& cola, const Cliente& cliente) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->cliente = cliente;
    nuevoNodo->siguiente = cola.frente;
    cola.final->siguiente = nuevoNodo;
    cola.final = nuevoNodo;
}

Cliente desencolar(Cola& cola) {
    if (esVacia(cola)) {
        cout << "La cola esta vacia. No se puede desencolar." << endl;
        exit(EXIT_FAILURE);
    }
    Nodo* temp = cola.frente->siguiente;
    Cliente cliente = temp->cliente;
    cola.frente->siguiente = temp->siguiente;
    if (cola.final == temp) {
        cola.final = cola.frente;
    }
    delete temp;
    return cliente;
}

bool esVacia(const Cola& cola) {
    return cola.frente == cola.final && cola.frente->siguiente == cola.frente;
}

void llenarCola(Cola& cola) {
    int n;
    cout << "�Cuantos clientes desea agregar? ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        Cliente cliente;
        cout << "Ingrese nombre del cliente "<< i+1 <<": ";
        cin >> cliente.nombre;
        cout << "Ingrese DNI del cliente "<< i+1 <<": ";
        cin >> cliente.dni;
        cout << "Ingrese edad del cliente "<< i+1 <<": ";
        cin >> cliente.edad;
        encolar(cola, cliente);
    }
}

void compararEdades(const Cola& cola1, const Cola& cola2) {
    bool edadesRepetidas[101] = { false };
    bool hayRepetidas = false;

    Nodo* actual = cola1.frente->siguiente;
    while (actual != cola1.frente) {
        edadesRepetidas[actual->cliente.edad] = true;
        actual = actual->siguiente;
    }

    actual = cola2.frente->siguiente;
    cout << "Edades repetidas entre las dos colas: ";
    while (actual != cola2.frente) {
        if (edadesRepetidas[actual->cliente.edad]) {
            cout << actual->cliente.edad << " ";
            hayRepetidas = true;
        }
        actual = actual->siguiente;
    }

    if (!hayRepetidas) {
        cout << "No hay edades repetidas entre las dos colas." << endl;
    } else {
        cout << endl;
    }
}

int mayorDNI(const Cola& cola) {
    int maxDNI = -1;
    Nodo* actual = cola.frente->siguiente;
    while (actual != cola.frente) {
        if (actual->cliente.dni > maxDNI) {
            maxDNI = actual->cliente.dni;
        }
        actual = actual->siguiente;
    }
    return maxDNI;
}

