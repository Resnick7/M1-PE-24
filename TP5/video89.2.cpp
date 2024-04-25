/* Hacer una funci�n para almacenar N n�meros en un arreglo din�mico, posteriormente en otra funci�n buscar un n�mero en particular.
NOTA: Puedes utilizar cualquier m�todo de busqueda(Secuencial o Binaria)*/


#include <iostream>

using namespace std;

int* almacenarNums(int N) {
    int* nums = new int[N];
    
    cout << "Ingrese " << N << " numeros:" <<endl;
    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
    }
    
    return nums; 
}

bool buscarNum(int* numeros, int N, int numBuscado) {
    for (int i = 0; i < N; ++i) {
        if (numeros[i] == numBuscado) {
            return true;
        }
    }
    return false;
}

int main() {
    int N;
    cout << "Ingrese la cantidad de numeros a almacenar: ";
    cin >> N;

    int* arreglo = almacenarNums(N);

    int numBuscado;
    cout << "Ingrese el numero que quiere buscar: ";
    cin >> numBuscado;

    if (buscarNum(arreglo, N, numBuscado)) {
        cout << "El numero " << numBuscado << " fue encontrado." << endl;
    } else {
        cout << "El numero " << numBuscado << " no fue encontrado." << endl;
    }

    delete[] arreglo;

    return 0;
}
