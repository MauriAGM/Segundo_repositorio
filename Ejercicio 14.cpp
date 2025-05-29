#include <iostream>
using namespace std;

int main() {
    int dividendo, divisor, cociente = 0;
    cout << "Dividendo: ";
    cin >> dividendo;
    cout << "Divisor: ";
    cin >> divisor;
    while (dividendo >= divisor) {
        dividendo -= divisor;
        cociente++;
    }
    cout << "Cociente: " << cociente << endl;
    return 0;
}
