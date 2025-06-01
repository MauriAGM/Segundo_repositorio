#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese un numero: ";
    cin >> n;
    if (n > 0){
    	for (int i = 1; i <= n; i++) {
        suma += i;
		}
		cout << "Suma = " << suma << endl;
    } else {
    	cout << "Numero invalido." << endl;
	}
    return 0;
}
