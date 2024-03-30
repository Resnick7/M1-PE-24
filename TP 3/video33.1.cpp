//Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor elemento del vector.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int nums[100], num, mayor=0;
	
	
	cout << "Ingrese el numero de elementos del arreglo:";
	cin >> num;
	
	for(int i=0;i<num;i++){
		cout << i+1 << ". Ingrese un numero: ";
		cin >> nums[i];
		
		if(nums[i] > mayor){
			mayor = nums[i];
		}
		
	}
	
	cout << "El numero mas grande del vector es: " << mayor;
	getch();
	return 0;
	
}
