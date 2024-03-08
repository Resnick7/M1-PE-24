//Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma ax^2 + bx + c = 0

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, raiz, x1, x2;

    cout << "Ingrese el valor a: ";
    cin >> a;
    cout << "Ingrese el valor b: ";
    cin >> b;
    cout << "Ingrese el valor c: ";
    cin >> c;

   if ((a == 0)||((pow(b,2)-4*a*c)<0)){
   	cout << "No tiene solución";
   }
   else {
   	
   	raiz = sqrt(pow(b,2)-4*a*c);
   	x1 = (-b+raiz) / (2*a);
   	x2 = (-b - raiz) / (2 * a);
   	cout << "Las soluciones son: "<< x1 << " y " << x2 << endl;
   }

    return 0;
}
