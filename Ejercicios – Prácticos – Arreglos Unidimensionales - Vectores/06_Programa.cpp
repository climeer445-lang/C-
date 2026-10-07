#include "iostream"

using namespace std;

int main(){
	cout << "\n06_Programa - //Arreglos unidimensionales\n";
	
	int n;
	cout << "Cuantos numeros tendra el vector: ";
	cin >> n;
	
	int Vec_tor[n];
	
	for(int i = 0; i < n; i++){
		cout << "Ingrese el numero [" << i << "]: ";
		cin >> Vec_tor[i];
	}
	
	int menor = Vec_tor[0];
	for(int i = 1; i < n; i++){
		if(Vec_tor[i] < menor){
			menor = Vec_tor[i];
		}
	}
	
	cout << "El menor del vector es : " << menor << endl;
	system("pause");
	return 0;
}