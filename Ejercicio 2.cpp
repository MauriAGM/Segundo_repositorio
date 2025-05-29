#include <iostream>
using namespace std;

int main() {
    float compra, total;

    cout << "Ingrese el monto de la compra: S/.";
    cin >> compra;

    if (compra > 1000) {
        total = compra * 0.8; // aplica 20% de descuento
    } else {
        total = compra;
    }

    cout << "El total a pagar es: S/." << total << endl;
    return 0;
}
