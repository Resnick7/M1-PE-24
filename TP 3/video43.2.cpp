//Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales, en caso de no serlo, indicar cual es mayor alfabeticamnte.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena1, cadena2;

    cout << "Ingrese la primera cadena de caracteres: ";
    cin >> cadena1;
    cout << "Ingrese la segunda cadena de caracteres: ";
    cin >> cadena2;

    if (cadena1 == cadena2) {
        cout << "Las cadenas son iguales.";
    } else {
        if (cadena1 < cadena2) {
            cout << "La segunda cadena es mayor alfabeticamente." << endl;
        } else {
            cout << "La primer cadena es mayor alfabeticamente." << endl;
        }
    }

    return 0;
}
