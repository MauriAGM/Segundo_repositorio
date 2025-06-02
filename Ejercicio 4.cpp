#include <iostream>
using namespace std;

int main() {
    float gasto, suma = 0;
    char continuar;
    do {
        cout << "Ingrese un gasto(no negativo): ";
        cin >> gasto;
        if (gasto>=0){
        	suma += gasto;
		} else {
			cout << "Gasto invalido. Debe ser un valor no negativo." << endl;
		}
        cout << "Desea ingresar otro gasto? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
    cout << "Suma total: " << suma << endl;
    return 0;
}
