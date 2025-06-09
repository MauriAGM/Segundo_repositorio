#include <iostream>
using namespace std;

int main() {

    int dividendo, divisor, cociente = 0, resto;
    bool resultadoNegativo = false;
    //Entrada
    cout << "Dividendo: ";
    cin >> dividendo;
    cout << "Divisor: ";
    cin >> divisor;
    
    //Proceso 
    // Validación de división por cero
    if (divisor == 0) {
        cout << "Error: No se puede dividir entre cero." << endl;
        return 1;
    }

    // Manejo de signos
    if ((dividendo < 0 && divisor > 0) || (dividendo > 0 && divisor < 0)) {
        resultadoNegativo = true;
    }

    // Usar valores absolutos para la operación
    int a = abs(dividendo);
    int b = abs(divisor);

    while (a >= b) {
        a -= b;
        cociente++;
    }

    resto = a;

    // Ajustar el signo del resultado
    if (resultadoNegativo) {
        cociente = -cociente;
    }
    //Salida 
    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << resto << endl;

    return 0;
}

