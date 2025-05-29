#include <iostream>
using namespace std;

int main() {
    int num, cont = 0;
    cout << "Ingrese numero: ";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) cont++;
    }
    if (cont == 2) cout << "Es primo.\n";
    else cout << "No es primo.\n";
    return 0;
}
