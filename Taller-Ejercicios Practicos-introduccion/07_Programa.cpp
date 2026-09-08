#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
	string producto;
	int cantProd;
	float Precio;
	float IVA;
	cout << "Operaciones aritméticas básicas II\n";
	cout << "ingrese el producto\n";
	cin.ignore();
	getline(cin,producto);
	cout << "ingrese la cantidad de producto\n";
	cin >> cantProd;
	cout << "ingrese el precio del producto\n";
	cin >>Precio;
	system("pause");
	return 0;
}