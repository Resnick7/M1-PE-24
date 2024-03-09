//Escriba un programa que calcule suma de factoriales

#include<iostream>

using namespace std;

int main() {
	int num,factorial = 1, suma = 0;
	
	cout<<"Ingrese un numero para calcular la suma factorial: "; cin>>num;
	
    for (int i = 1; i <= num; ++i) {
        factorial = 1;
        
        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }
        suma += factorial;
    }

	
	cout<<"La suma factorial de "<< num<<" es: "<< suma<< endl;
	
	return 0;
}
