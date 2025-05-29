#include <iostream>
using namespace std;

int main() {
    float gasto, suma = 0;
    char continuar;
    do {
        cout << "Ingrese un gasto: ";
        cin >> gasto;
        suma += gasto;
        cout << "Desea ingresar otro gasto? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
    cout << "Suma total: " << suma << endl;
    return 0;
}
