#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese numeros (finaliza con un numero negativo):\n";
    cout << "---------------------------------------------\n";

    cout << "Numero: ";
    cin >> numero;

    while (numero >= 0) {
        // Aqu� podr�as hacer algo con el n�mero si deseas (sumarlo, guardarlo, etc.)
        
        cout << "Numero: ";
        cin >> numero;
    }

    cout << "Fin de la captura." << endl;

    return 0;
}

