#include <iostream>

using namespace std;

int main(){
	int num;
	int i = 0;
	bool es_cero = true;
	cout << "\n 05_Programa-//Estructuras repetitivas do while \n";
	
	do{
	cout <<"\nIngrese el numero 0\n";
	cin >> num;
		if (num > 0) i++;
		else{
		es_cero = false;	
		}
		
	}while(es_cero);
	cout << "se ingreso " << i << " numeros mayores a 0";
}