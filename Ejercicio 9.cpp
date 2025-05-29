#include <iostream>
using namespace std;

int main() {
    int num, cont = 0;
    cout << "Ingrese numero positivo: ";
    cin >> num;
    do {
        num /= 10;
        cont++;
    } while (num > 0);
    cout << "Cantidad de digitos: " << cont << endl;
    return 0;
}
