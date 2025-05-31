#include <iostream>
using namespace std;

int main(){
	int num; 
	cout << "Ingrese un numero entero positivo mayor que 1: ";
	cin >> num;
	if ( num <= 1) {
		cout << "El numero debe ser mayor que 1. \n";
		return 1;
	}
	
	bool esPrimo = true;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			esPrimo = false;
			break;
		}
	}
	
	if (esPrimo)
		cout << "Es primo.\n";
	else 
		cout << "No es primo.\n";
	
	return 0;
}