#include "iostream"
#include <vector> 
using namespace std;

int main(){
	cout << "\n05_Programa - //Arreglos unidimensionales\n";
	vector <int> Vector;
	int Num;
	int cantida;
	
	cout << "cuantios numeros desea ingresar\n";
	cin >> cantida;
	
	for (int i = 0; i < cantida;i++){
		cout << "ingrese el valor para los indices\n";
		cin >> Num;
		
		 Vector.push_back(Num); 
	}
	int mayor = Vector[0];
	int posicionMayor = 0;
	
	for (int i = 1; i < Vector.size(); i++){
		if (Vector[i] > mayor){
			mayor = Vector[i];       
			posicionMayor = i;      
		}
	}
		cout << "el numero en la posicion ["<< posicionMayor  <<"] ""es al mayor";
	
	system("pause");
	return 0;
}