#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main(){
	float cateto1;
	float cateto2;
	float hipotenusa;
	
	cout << "Hipotenusa de un triangulo rectangulo\n";
	cout << "ingrese el valor del primer cateto\n";
	cin >> cateto1;
	cout << "ingrese el valor del segundo cateto\n";
	cin >> cateto2;
	
	hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));
	
	cout << "el valor del primer cateto es: "<<cateto1<<"\n";
	cout << "el valor del segundo cateto es: "<<cateto2<<"\n";
	cout << "la hipotenusa es: "<<hipotenusa<<"\n";
	system("pause");
	return 0;
}