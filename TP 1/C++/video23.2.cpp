//Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un período de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float temperatura, suma = 0, media, temperaturaAlta, temperaturaBaja;
	
	for(int i=0;i<24;i+=4){
		cout<<"Cual fue la temperatura a las "<<i<<"? ";
		cin>>temperatura;
		
		suma += temperatura;
		
		if(temperatura > temperaturaAlta){
			temperaturaAlta = temperatura;
		}
		if(temperatura < temperaturaBaja){
			temperaturaBaja = temperatura;
		}
	}
	
	media = suma / 6;
	
	cout << "La temperatura media es: "<< media << endl;
	cout << "La temperatura mas alta fue: " << temperaturaAlta<<endl;
	cout << "La temperatura mas baja fue: " << temperaturaBaja<<endl;	
	
	getch();
	return 0;
}
