#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){
		float a;
		float b;
		float c;
		float d;
		float e;
		float f;
		float elemnt1;
		float elemnt2;
		float elemnt3;
		cout << "ingrese un numero para el valor A\n";
		cin >> a;
		cout << "ingrese un numero para el valor B\n";
		cin >> b;
		cout << "ingrese un numero para el valor C\n";
		cin >> c;
		cout << "ingrese un numero para el valor D\n";
		cin >> d;
		cout << "ingrese un numero para el valor E\n";
		cin >> e;
		cout << "ingrese un numero para el valor F\n";
		cin >> f;
	
		elemnt1 = (a/b) + 1; 
		elemnt2 = (a+b)/(c+d);
		elemnt3 = (a+(b/c)) / (d+(e/f));
	
		cout << "El resultado de la operacion del elemnto 1 es \n" <<elemnt1<<"\n";
		cout << "El resultado de la operacion del elemnto 2 es \n" <<elemnt2<<"\n";
		cout << "El resultado de la operacion del elemnto 3 es \n" <<elemnt3<<"\n";
		system("pause\n");
		return 0;
}