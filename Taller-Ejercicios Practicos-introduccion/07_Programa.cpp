#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
	string producto;
	int cantProd;
	float Precio;
	float IVA = 0.19;
	float preciototal;
	cout << "Operaciones aritmeticas basicas II\n";
	cout << "ingrese el producto\n";
	cin.ignore();
	getline(cin,producto);
	cout << "ingrese la cantidad de producto\n";
	cin >> cantProd;
	cout << "ingrese el precio del producto\n";
	cin >>Precio;
	
	preciototal = Precio + (Precio * IVA);
	cout << "El precio total incluyendo el IVA queda en: "<<preciototal<<"\n";
	system("pause");
	return 0;
}