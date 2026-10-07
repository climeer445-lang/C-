#include "iostream"

using namespace std;

int main(){
	cout << "\n08_Programa - //Arreglos unidimensionales\n";
	
	char vec1[] = {'a', 'b', 'c', 'd', 'e'};
	char vec2[] = {'f', 'g', 'h', 'i', 'j'};
	char nuevo[10];
	
	for(int i = 0; i < 5; i++){
		nuevo[i] = vec1[i];
	}
	for(int i = 0; i < 5; i++){
		nuevo[i + 5] = vec2[i];
	}
	
	cout << "El contenido del nuevo vector es: " << endl;
	for(int i = 0; i < 10; i++){
		cout << "[" << i << "] = " << nuevo[i] << endl;
	}
	
	system("pause");
	return 0;
}