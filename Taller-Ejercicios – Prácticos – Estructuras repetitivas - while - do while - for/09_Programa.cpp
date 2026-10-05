

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el numero de terminos de la serie Fibonacci: ";
    cin >> n;

    long long anterior = 0, actual = 1, siguiente;

    cout << "Serie Fibonacci: ";

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << anterior << " ";
        } else if (i == 2) {
            cout << actual << " ";
        } else {
            siguiente = anterior + actual;
            cout << siguiente << " ";
            anterior = actual;
            actual = siguiente;
        }
    }
    cout << endl;

    return 0;
}
