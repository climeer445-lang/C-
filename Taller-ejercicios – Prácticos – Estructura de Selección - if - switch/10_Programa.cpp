#include <iostream>
using namespace std;

int main(){
    int saldo = 100000;
    int opcion;
    int plata;

    cout << "10_Programa - // Estructura de Seleccion switch\n";
    cout << "Saldo actual: " << saldo << "\n";
    cout << "Elija una opcion:\n";
    cout << "1: Consignar\n";
    cout << "2: Retirar\n";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese el valor a consignar\n";
            cin >> plata;
            saldo = saldo + plata;
            cout << "Saldo final: " << saldo << "\n";
            break;

        case 2:
            cout << "Ingrese el valor a retirar\n";
            cin >> plata;
            if (plata > saldo) {
                cout << "El retiro es mayor al saldo disponible. Transaccion rechazada.\n";
            } else {
                saldo = saldo - plata;
                cout << "Saldo final: " << saldo << "\n";
            }
            break;

        default:
            cout << "Opcion invalida\n";
    }

    system("pause");
    return 0;
}