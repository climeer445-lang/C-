#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
	string caracter;
	cout << "Cadenas de caracteres\n";
	cout <<"ingrese una cadena de caracteres cualquiera\n";
	getline(cin,caracter);
	
	cout << "El o los caracteres ingresados fueron: "<<caracter<<"\n";
	system("pause");
	return 0;
}