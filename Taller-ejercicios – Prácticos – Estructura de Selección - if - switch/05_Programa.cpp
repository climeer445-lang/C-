#include <iostream>

using namespace std;

int main(){
	int edad;
	cout << "05_Programa - //Estructura de Selección if doble\n";
	cout << "ingrese la edad del usuario\n";
	cin >> edad;
	
	if (edad >= 18 && edad <= 25)
		cout << "La edad del usuario se encunetra entre la edad permitida\n";
	else
		cout <<"Edad fuera del rango\n";
	system("pause");
	return 0;
}