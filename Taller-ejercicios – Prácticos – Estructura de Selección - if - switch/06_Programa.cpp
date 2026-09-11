#include <iostream>

using namespace std;

int main(){
	int n1,n2,n3,n4;
	cout << "06_Programa - // Estructura de Seleccion if doble\n";
	cout << "Ingrese un numero para el primer valor\n";
	cin >> n1;
	cout << "Ingrese un numero para el segundo valor\n";
	cin >> n2;
	cout << "Ingrese un numero para el tercer valor\n";
	cin >> n3;
	cout << "Despues de ingresados se le pedira un cuarto numero\n";
	cin >> n4;
	
	if (n1 == n4)
		cout << "El numero 1 es igual al numero 4\n";
		else if (n2 == n4)
			cout << "El numero 2 es igual al numero 4\n";
			else if (n3 == n4)
					cout << "El numero 3 es igual al numero 4\n";
	else
		cout << "ningun numero es igual al 4\n";
	system("pause");
	return 0;
}