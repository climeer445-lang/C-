#include <iostream>
using namespace std;

int main(){
    int n1;
    cout << "09_Programa - // Estructura de Seleccion switch\n";
    cout << "Ingrese un numero del 1 al 12\n";
    cin >> n1;

    switch (n1) {
        case 1:  cout << "Enero\n";
			break;
        case 2:  cout << "Febrero\n";
			break;
        case 3:  cout << "Marzo\n";
			break;
        case 4:  cout << "Abril\n";
		    break;
        case 5:  cout << "Mayo\n";
		    break;
        case 6:  cout << "Junio\n";
		    break;
        case 7:  cout << "Julio\n";
		    break;
        case 8:  cout << "Agosto\n";
		    break;
        case 9:  cout << "Septiembre\n";
		    break;
        case 10: cout << "Octubre\n";
		    break;
        case 11: cout << "Noviembre\n";
		    break;
        case 12: cout << "Diciembre\n";
		    break;
        default:
            cout << "El numero ingresado esta fuera del rango permitido\n";
    }

    system("pause");
    return 0;
}