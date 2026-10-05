
#include <iostream>
using namespace std;

int main() {
    const int LECTURAS = 6; 
    float temperatura, mayor = 0, menor = 0, suma = 0;

    cout << "Ingrese las temperaturas cada 4 horas durante el dia:" << endl;

    for (int i = 0; i < LECTURAS; i++) {
        cout << "Hora " << (i * 4) << ":00 - Temperatura: ";
        cin >> temperatura;

        if (i == 0) {
            mayor = temperatura;
            menor = temperatura;
        } else {
            if (temperatura > mayor) mayor = temperatura;
            if (temperatura < menor) menor = temperatura;
        }

        suma += temperatura;
    }

    float promedio = suma / LECTURAS;

    cout << "\nTemperatura mayor: " << mayor << endl;
    cout << "Temperatura menor: " << menor << endl;
    cout << "Temperatura promedio: " << promedio << endl;

    return 0;
}
