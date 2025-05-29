#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero para mostrar su tabla de multiplicar: ";
    cin >> numero;
    cout << "\nTabla de multiplicar del " << numero << ":\n";
    cout << "-----------------------------\n";
    for (int i = 1; i <= 12; i++) {
        int producto = numero * i;
        cout << numero << " x " << i << " = " << producto << endl;
    }
    return 0;
}
