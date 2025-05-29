#include <iostream>
using namespace std;

int main() {
    int n, num, sumaP = 0, contP = 0, sumaI = 0, contI = 0;
    cout << "Cantidad de numeros: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Numero: ";
        cin >> num;
        if (num % 2 == 0) {
            sumaP += num;
            contP++;
        } else {
            sumaI += num;
            contI++;
        }
    }
    cout << "Promedio pares: " << (contP ? (float)sumaP / contP : 0) << endl;
    cout << "Promedio impares: " << (contI ? (float)sumaI / contI : 0) << endl;
    return 0;
}
