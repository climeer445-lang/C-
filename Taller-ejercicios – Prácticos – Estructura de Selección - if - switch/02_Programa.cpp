#include <iostream>
#include <string>

using namespace std;
int main(){
		float n1;
		float n2;
		float n3;
		cout << "Estructura de Seleccion if anidada\n";
		cout << "ingrese un numero cualquieras para el primer valor\n";
		cin	 >> n1;
		cout << "ingrese un numero cualquieras para el segundo valor\n";
		cin	 >> n2;
		cout << "ingrese un numero cualquieras para el tercer valor\n";
		cin	 >> n3;
		if (n1 >= n2) {
    if (n1 >= n3)
        cout << "El primer numero es el mayor\n";
    else
        cout << "El tercer numero es el mayor\n";
	} else {
    if (n2 >= n3)
        cout << "El segundo numero es el mayor\n";
    else
        cout << "El tercer numero es el mayor\n";
	}
		system("pause");
		return 0;
}