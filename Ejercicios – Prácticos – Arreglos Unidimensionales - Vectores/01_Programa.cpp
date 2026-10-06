#include <iostream>

using namespace std;

int main(){
	cout << "\n01_Programa - //Arreglos unidimensionales\n";
	int ent_Num[] = {1,2,3,4,5};
	int tot_Suma = 0;
	for (int i = 0; i < 5; i++){
		tot_Suma += ent_Num[i] ;
	}
	cout << "la suma total de la suma :\n" << tot_Suma << endl;
}