#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Numero limite: ";
    cin >> n;
    for (int i = 1; i <= n; i += 2) {
        suma += i;
    }
    cout << "Suma de impares: " << suma << endl;
    return 0;
}
