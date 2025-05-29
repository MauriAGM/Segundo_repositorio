#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de multiplos de 7: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i * 7 << endl;
    }
    return 0;
}
