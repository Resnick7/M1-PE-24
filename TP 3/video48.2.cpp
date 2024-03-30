//Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real, convertirlos a sus respectivos valores y por ultimo sumarlos.

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string cadena_entero, cadena_real;

    cout << "Ingrese cadena de caracteres de numeros enteros: ";
    cin >> cadena_entero;
    cout << "Ingrese cadena de caracteres de numeros reales: ";
    cin >> cadena_real;

    int entero;
    double real;
    istringstream(cadena_entero) >> entero;
    istringstream(cadena_real) >> real;

    double suma = entero + real;

    cout << "La suma de los números es: " << suma << endl;

    return 0;
}
