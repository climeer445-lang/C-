#include <iostream>

using namespace std;

int main(){
	int n1;
	cout << "\n04_Programa - //Estructuras repetitivas do while - for\n";
	do{
		cout << "\nIngrese un numero cualquiera del 1 al 10\n";
	cin >> n1;
	if (n1 > 10 || n1 < 1)
		cout << "valor invalido";
	}while(n1 > 10 || n1 < 1);
	
	for(int i = 0 ;i <= 11; i++){
		cout << n1 << "X" << i << "=" << (n1*i) << endl;
	}
		
	
		
	
	
}