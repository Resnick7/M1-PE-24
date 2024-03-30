//Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de cadena, y si esta supera a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla

#include <iostream>
#include <string>

using namespace std;

int main() {
    std::string cadena;

    // Solicitar al usuario que ingrese una cadena de caracteres
    cout << "Ingrese una cadena de caracteres: ";
    cin >> cadena;

  
    if (cadena.length() > 10) {
    	
        cout << "La cadena es: " << cadena << endl;
        
    } else {
    	
        cout << "La longitud no supera los 10 caracteres." << endl;
    }

    return 0;
}
