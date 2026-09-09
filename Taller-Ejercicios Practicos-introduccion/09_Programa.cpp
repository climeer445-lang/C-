#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){
	int a;
	int b;
	int aux;
	cout << "ingrese un valor para A\n";
	cin >> a;
	cout << "ingrese un valor para B\n";
	cin >> b;
	
	cout << "ahora el valor A pasara estar en B\n";
	cout << "y el valor B pasara estar en A\n";
	
	aux = a;
	a = b;
	b = aux;
	cout << "ahora el valor de A es: "<<a<<"\n";
	cout << "ahora el valor de A es: "<<b<<"\n";
	system("pause");
	return 0;
}