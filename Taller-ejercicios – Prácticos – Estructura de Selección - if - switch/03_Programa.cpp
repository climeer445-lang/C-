#include <iostream>
using namespace std;

int main(){
    int n1;
    cout << "03_Programa - // Estructura de Seleccion if anidada\n";
    cout << "Ingrese un numero entero\n";
    cin >> n1;

    if (n1 == 0) {
        cout << "El numero ingresado es igual a cero\n";
    }
    else {
        if (n1 % 2 == 0)
            cout << "El numero ingresado es par\n";
        else
            cout << "El numero ingresado es impar\n";
    }

    system("pause");
    return 0;
}