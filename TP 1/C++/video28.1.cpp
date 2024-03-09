//Hacer un programa que realice la serie de Fibonacci

#include<iostream>

using namespace std;

int main () {
	int n, x = 0, y = 1, z;
	
	cout<<"Digite el numero de elementos: "; cin>>n;
	
	cout<<"La serie de Fibonacci de "<<n<<" elementos es: "<<endl;
	
	for(int i = 0; i<n; i++) {
		cout<<z<<" ";
		z = x + y;
		x = y;
		y = z;
	}
	
	return 0;
}
