//Escribe un programa que defina un vector de n�meros y calcule si existe alg�n n�mero en el vector cuyo valor equivale a la suma del resto de n�meros del vector

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int nums[5] = {1,2,3,4,5};
	int sum=0, mayor=0;
	
	for(int i=0;i<5;i++){
		sum += nums[i];
		
		if(nums[i]>mayor){ 
			mayor = nums[i];
		}
	}
	
	if(mayor == sum-mayor){
		cout << "El numero " << mayor << " equivale a la suma del resto de numeros";
	}
	else{
		cout << "No existe ningun numero que sea equivalente a la suma del resto de numeros";
	}
	
	
	getch();
	return 0;
}
