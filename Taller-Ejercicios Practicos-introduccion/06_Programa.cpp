#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	float num1;
	float num2;
	int suma;
	int resta;
	float multiplicacion;
	float division;
	cout << "Operaciones aritmeticas basicas\n";
	cout << "Ingrese el primer numero \n";
	cin >> num1;
	cout << "Ingrese el segundo numero\n";
	cin >> num2;	
	suma = num1 + num2;
	resta = num1 + num2;
	multiplicacion = num1 * num2;
	division = num1 / num2;
	
	cout << "El resultado de la suma es: "<<suma<<"\n";
	cout << "El resultado de la resta es: "<<resta<<"\n";
	cout << "El resultado de la multiplicacion es: "<<multiplicacion<<"\n";
	cout << "El resultado de la division es: "<<division<<"\n";
	system("pause");
	return 0;
}