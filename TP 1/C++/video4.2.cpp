//Escribe un programa que lea de la entrada est�mdar el precio de un producto y muestre en la salida est�ndar el precio del producto al aplicarle el IVA.

#include <iostream>

using namespace std;

int main() {
    double precioProducto, precioIva;
    const double iva = 0.21; 

    cout << "Ingresa el precio del producto: ";
    cin >> precioProducto;

    precioIva = precioProducto + (precioProducto * iva);

    cout << "El precio con IVA es: " << precioIva << endl;

    return 0;
}
