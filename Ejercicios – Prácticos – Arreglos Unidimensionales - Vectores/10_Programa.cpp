#include "iostream"
#include "string"

using namespace std;

int main(){
	cout << "\n10_Programa - //Arreglos unidimensionales\n";
	
	string nombres[] = {"Hugo", "Paco", "Luis"};
	float promedios[3];
	
	for(int i = 0; i < 3; i++){
		float suma = 0;
		float nota;
		cout << "\nNotas del estudiante " << nombres[i] << endl;
		
		for(int j = 0; j < 4; j++){
			do{
				cout << "Ingrese la nota " << (j + 1) << " (entre 0 y 5): ";
				cin >> nota;
			}while(nota < 0 || nota > 5);
			suma += nota;
		}
		
		promedios[i] = suma / 4;
	}
	
	cout << "\n--- Promedios ---" << endl;
	for(int i = 0; i < 3; i++){
		cout << "Estudiante: " << nombres[i] << " - Promedio: " << promedios[i] << endl;
	}
	
	system("pause");
	return 0;
}