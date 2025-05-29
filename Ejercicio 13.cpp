#include <iostream>
using namespace std;

int main() {
    int a, b, producto = 0;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        producto += a;
    }
    cout << "Producto: " << producto << endl;
    return 0;
}
