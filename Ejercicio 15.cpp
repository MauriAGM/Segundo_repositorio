#include <iostream>
using namespace std;

int main() {

    int n, suma = 0;
    
    //Entrada
    cout << "Ingrese un numero limite positivo: ";
    cin >> n;
    
    //Proceso
    if (n <= 0) {
        cout << "Por favor, ingrese un numero mayor que cero." << endl;
        return 1;
    }

    cout << "Sumando los numeros impares desde 1 hasta " << n << "..." << endl;

    for (int i = 1; i <= n; i += 2) {
        suma += i;
    }
    //Salida 
    cout << "La suma de los numeros impares es: " << suma << endl;

    return 0;
}

