#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Ingrese la cantidad de multiplos de 7 (mayor que 0): ";
        cin >> n;
        if (n <= 0) {
            cout << "Error: Debe ingresar un numero positivo mayor que cero.\n";
        }
    } while (n <= 0);

    cout << "\nLos primeros " << n << " multiplos de 7 son:\n";
    for (int i = 1; i <= n; i++) {
        cout << i * 7 << endl;
    }

    return 0;
}

