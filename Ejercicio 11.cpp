#include <iostream>//Factorial de un n�mero
using namespace std;

int main() {

    int n;
    double factorial = 1;

    cout << "Ingrese un numero entero no negativo: ";
    cin >> n;
    //proceso
    if (n < 0) {
        cout << "El factorial no esta definido para n�meros negativos.\n";
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    //Salida 
    cout << "El factorial de " << n << " es: " << factorial << endl;
    return 0;
}

