#include "iostream"

using namespace std;

int main(){
	cout << "\n04_Programa - //Arreglos unidimensionales\n";
	
	int Vec_tor[] = {1, 2, 3, 4, 5};
	int tamano = sizeof(Vec_tor) / sizeof(Vec_tor[0]);

	for (int i = tamano - 1; i >= 0; i--){
		cout << "El numero en la posicion [" << i << "] es: " << Vec_tor[i] << endl;
	}
	
	system("pause");
	return 0;
}