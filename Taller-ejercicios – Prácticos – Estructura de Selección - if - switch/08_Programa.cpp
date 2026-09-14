#include <iostream>
using namespace std;

int main(){
    char vocal;
    cout << "08_Programa - // Estructura de Seleccion switch\n";
    cout << "Ingrese un caracter\n";
    cin >> vocal;

    switch (vocal) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << "Es una vocal minuscula\n";
            break;

        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Es una vocal mayuscula\n";
            break;

        default:
            cout << "El caracter ingresado no es una vocal\n";
    }

    system("pause");
    return 0;
}