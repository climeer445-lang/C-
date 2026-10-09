#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> nombres;
    vector<float> notas;
    string nombre;
    int n = 0;
    float suma = 0;
    float promedio = 0;
    float nota = 0;
    int posMayor = 0;
    int aprobados = 0, reprobados = 0;

    cout << "Ingresa la cantidad de estudiantes que va a evaluar: ";
    cin >> n;

    if (n <= 0) {
        cout << "No hay estudiantes" << endl;
        return 0;
    }

    // UN SOLO CICLO: nombre + nota de cada estudiante
    for (int i = 0; i < n; i++) {
        cout << "Nombre del estudiante " << i + 1 << ": ";
        cin >> nombre;
        nombres.push_back(nombre);

        do {
            cout << "Nota de " << nombre << " (0 a 5): ";
            cin >> nota;
            if (nota < 0 || nota > 5) {
                cout << "Rango invalido, debe ser entre 0 y 5\n";
            }
        } while (nota < 0 || nota > 5);
        notas.push_back(nota);
    }

    for (int i = 0; i < nombres.size(); i++) {
        cout << "\n" << nombres[i] << ": " << notas[i] << endl;
    }

    for (int i = 0; i < nombres.size(); i++) {
        suma += notas[i];
    }
    promedio = suma / nombres.size();

    for (int i = 1; i < nombres.size(); i++) {
        if (notas[i] > notas[posMayor]) {
            posMayor = i;
        }
    }
    cout << "\nNota mas alta: " << nombres[posMayor] << " con " << notas[posMayor] << endl;

    for (int i = 0; i < nombres.size(); i++) {
        if (notas[i] >= 3) {
            cout << "El estudiante " << nombres[i] << " ha APROBADO!!!!!" << endl;
            aprobados++;
        } else {
            cout << "El estudiante " << nombres[i] << " ha reprobado :(" << endl;
            reprobados++;
        }
    }

    cout << "\nLa suma total de las notas es: " << suma << endl;
    cout << "El promedio del curso es: " << promedio << endl;
    cout << "La cantidad de aprobados fue de: " << aprobados << endl;
    cout << "La cantidad de reprobados fue de: " << reprobados << endl;

    system("pause");
    return 0;
}