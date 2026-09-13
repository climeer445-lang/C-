#include <iostream>

using namespace std;

int main(){
	int n1;
	cout << "07_Programa - // Estructura de Seleccion switch\n";
	cout << "ingrese un numero del 1 al 5\n";
	cin >> n1;
	
switch (n1) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "El numero ingresado esta en el rango permitido\n";
        break;
    default:
        cout << "El numero ingresado esta fuera del rango\n";
}
	system("pause");
	return 0;
}