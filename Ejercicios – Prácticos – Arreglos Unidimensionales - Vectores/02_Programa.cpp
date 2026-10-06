#include <iostream>

using namespace std;

int main(){
	cout << "\n02_Programa - //Arreglos unidimensionales\n";
	int ent_Num[] = {1,2,3,4,5};
	int tot_Suma = ent_Num[0];
	for (int i = 1; i < 5; i++){
		tot_Suma *= ent_Num[i] ;
	}
	cout << "la suma total de la suma :\n" << tot_Suma << endl;
}