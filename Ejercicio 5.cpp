#include <iostream>
using namespace std;

int main() {
    float nota, suma = 0;
    int aprobados = 0, desaprobados = 0, total = 0;
    char continuar;
    do {
        cout << "Ingrese nota (0 a 20): ";
        cin >> nota;
        if (nota >= 0 && nota <= 20) {
            if (nota >= 10.5)
                aprobados++;
            else
                desaprobados++;
            suma += nota;
            total++;
        } else {
            cout << "Nota fuera de rango. Intente nuevamente.\n";
        }
        cout << "Desea ingresar otra nota? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
    if (total > 0) {
        cout << "Aprobados: " << aprobados << "\nDesaprobados: " << desaprobados;
        cout << "\nPromedio: " << suma / total << endl;
    } else {
        cout << "No se ingresaron notas validas.\n";
    }
    return 0;
}
