#include <iostream>
using namespace std;

int main() {
    int n;
    double factorial = 1;
    cout << "Numero: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "Factorial: " << factorial << endl;
    return 0;
}
