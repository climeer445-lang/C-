#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){
	int ID;
	string nombre;
	float n1,n2,n3;
	float Nt = 0.30;
	float Np = 0.50;
	float NPa = 0.20;
	float NFT;
	cout << "Datos y nota final del alumno\n";
	cout << "ingrese su codigo\n";
	cin >> ID;
	cout << "ingrese su nombre y apellidos\n";
	cin.ignore();
	getline(cin,nombre);
	cout << "ingrese la nota teorica\n";
	cin >> n1;
	cout << "ingrese la nota practica\n";
	cin >> n2;
	cout << "ingrese la nota de participacion\n";
	cin >> n3;
	
	NFT = (n1 * Nt) + (n2 * Np) + (n3 * NPa); 
	cout << "Su codigo es: " <<ID<<"\n";
	cout << "Su nombre es: " <<nombre<<"\n";
	cout << "La nota teorica es de: "<<n1<<"\n";
	cout << "La nota teorica es de: "<<n2<<"\n";
	cout << "La nota teorica es de: "<<n3<<"\n";
	cout <<	"La nota final total es de: "<<NFT<<"\n";
	system("pause");
	return 0;
}