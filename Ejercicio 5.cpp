#include <iostream>
using namespace std;

int main() {
    float nota, suma = 0;
    int aprobados = 0, desaprobados = 0, total = 0;
    char continuar;
    do {
        cout << "Ingrese nota: ";
        cin >> nota;
        if (nota >= 10.5) aprobados++;
        else desaprobados++;
        suma += nota;
        total++;
        cout << "Desea ingresar otra nota? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
    cout << "Aprobados: " << aprobados << "\nDesaprobados: " << desaprobados;
    cout << "\nPromedio: " << suma / total << endl;
    return 0;
}
