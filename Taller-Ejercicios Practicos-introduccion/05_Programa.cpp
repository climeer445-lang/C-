#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
	float ID;
	string nombre;
	int edad;
	double altura;
	string usuario;
	cout << "Entrada y salida de datos\n";
	cout << "ingrese su codigo\n";
	cin >> ID;
	cout << "ingrese su Nombre y Apellidos\n";
	cin.ignore();
	getline(cin,nombre);
	cout << "ingrese su edad\n";
	cin >> edad;
	cout << "ingrese su altura\n";
	cin >> altura;
	cout << "ingrese su usuario\n";
	cin.ignore();
	getline(cin,usuario);
	
	cout << "Su codigo es: "<<ID<<"\n";
	cout << "Su nombre y apellidos son: "<<nombre<<"\n";
	cout << "Su edad es: "<<edad<<"\n";
	cout << "Su altura es: "<<altura<<"\n";
	cout << "Su usuario es: "<<usuario<<"\n";
	
	system("pause");
	return 0;
}