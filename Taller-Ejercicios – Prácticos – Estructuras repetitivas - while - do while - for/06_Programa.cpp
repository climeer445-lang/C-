
#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    for (int i = 1; i <= 10; i++) {
        suma += i * i;
    }

    cout << "La suma de los cuadrados de los 10 primeros enteros mayores que cero es: "
         << suma << endl;

    return 0;
}
