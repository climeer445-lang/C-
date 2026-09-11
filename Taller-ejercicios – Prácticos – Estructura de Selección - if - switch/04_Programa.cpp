#include <iostream>

using namespace std;

int main(){
	int n1;
	cout <<"04_Programa - //Estructura de Selección if anidada\n";
	cout <<"ingrese un numero cualquiera\n";
	cin >> n1;
	
	if (n1 > 0 ){
		cout << "El numero ingresado es positivivo\n";
	}
		else if (n1 < 0){
			cout <<"El numero ingresadp es negativo\n";
		}
		else{
			cout << "El numero ingresado es igual a 0\n";
		}
		
	
	system("pause");
	return 0;
}