#include "iostream"

using namespace std;

int main(){
	cout << "\n09_Programa - //Arreglos unidimensionales\n";
	
	char Vec_tor[] = {'o', 't', 'c', 'e', 'r', 'r', 'o', 'c'};
	int tamano = sizeof(Vec_tor) / sizeof(Vec_tor[0]);
	char inverso[tamano];
	
	for(int i = 0; i < tamano; i++){
		inverso[i] = Vec_tor[tamano - 1 - i];
	}
	
	cout << "El contenido del nuevo vector (inverso) es: " << endl;
	for(int i = 0; i < tamano; i++){
		cout << "[" << i << "] = " << inverso[i] << endl;
	}
	
	system("pause");
	return 0;
}