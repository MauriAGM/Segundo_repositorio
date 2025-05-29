#include <iostream>
using namespace std;

int main() {
    char sexo;	
    int edad;
    float pulsaciones;

    cout << "Ingrese su sexo (M para masculino, F para femenino): ";
    cin >> sexo;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (sexo == 'F' || sexo == 'f') {
        pulsaciones = (220 - edad) / 10.0;
    } else if (sexo == 'M' || sexo == 'm') {
        pulsaciones = (210 - edad) / 10.0;
    }

    cout << "El número de pulsaciones cada 10 segundos es: " << pulsaciones << endl;
    return 0;
}
