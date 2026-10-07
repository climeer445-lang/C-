#include "iostream"

using namespace std;

int main(){
	cout << "\n07_Programa - //Arreglos unidimensionales\n";
	
	int n;
	cout << "Cuantos numeros tendra el vector: ";
	cin >> n;
	
	int Vec_tor[n];
	int tot_sum = 0;
	
	for(int i = 0; i < n; i++){
		cout << "Ingrese el numero [" << i << "]: ";
		cin >> Vec_tor[i];
		tot_sum += Vec_tor[i];
	}
	
	bool encontrado = false;
	for(int i = 0; i < n; i++){
		int suma_resto = tot_sum - Vec_tor[i];
		if(Vec_tor[i] == suma_resto){
			cout << "El numero " << Vec_tor[i] << " en la posicion [" << i 
			     << "] es igual a la suma del resto de elementos." << endl;
			encontrado = true;
		}
	}
	
	if(!encontrado){
		cout << "Ningun numero es igual a la suma del resto de elementos." << endl;
	}
	
	system("pause");
	return 0;
}