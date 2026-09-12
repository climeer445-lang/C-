#include <iostream>
#include <string>

using namespace std;

int main(){
	float n1,n2;
	
	cout << "ingrese cualquier numero para el valor #1\n";
	cin >> n1;
		cout << "ingrese cualquier numero para el valor #2\n";
	cin >> n2;
	
	if (n1 > n2)
		cout << "El primer valor es el mayor\n";
	else
		cout << "El segundo valor es el mayor\n";
	system("pause");
	return 0;
}