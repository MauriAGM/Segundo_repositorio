#include <iostream>
using namespace std;

int main() {
    int n, numero, suma = 0, cont = 0;
    do {
        cout << "Ingrese la cantidad de numeros (debe ser positiva): ";
        cin >> n;
    } while (n <= 0);
    for (int i = 0; i < n; i++) {
        cout << "Numero: ";
        cin >> numero;
        if (numero >= 0) {
            suma += numero;
            cont++;
        }
    }
    if (cont > 0)
        cout << "Promedio de no negativos: " << (suma / cont) << endl;
    else
        cout << "No se ingresaron numeros no negativos." << endl;
    return 0;
}


