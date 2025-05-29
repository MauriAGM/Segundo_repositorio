#include <iostream>
using namespace std;

int main() {
    int n, num, mayor;
    cout << "Cantidad de numeros: ";
    cin >> n;
    cin >> mayor;
    for (int i = 1; i < n; i++) {
        cin >> num;
        if (num > mayor) mayor = num;
    }
    cout << "Mayor: " << mayor << endl;
    return 0;
}
