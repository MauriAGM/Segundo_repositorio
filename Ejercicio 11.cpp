#include <iostream>
using namespace std;

int main() {
    int n;
    double factorial = 1;
    cout << "Ingrese un numero entero no negativo: ";
    cin >> n;
    if (n < 0){
    	cout << "Ingrese el factorial no esta definido para numeros negativos.\n";
    	return 1;
	}
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "Factorial: " << factorial << endl;
    return 0;
}
