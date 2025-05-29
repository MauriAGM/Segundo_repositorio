#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese numeros (finaliza con un numero negativo):\n";
    while (true) {
        cout << "Numero: ";
        cin >> numero;
        if (numero < 0) {
            cout << "Fin de la captura" << endl;
            break;  
        }
    }
    return 0;
}
