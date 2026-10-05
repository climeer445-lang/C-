

#include <iostream>
using namespace std;

int main() {
    const int ALUMNOS = 5;
    const int EXAMENES = 3;
    const float NOTA_APROBATORIA = 3.0;

    float notas[ALUMNOS][EXAMENES];
    int ganaronTodos = 0;
    int ganaronAlMenosUno = 0;
    int ganaronUltimo = 0;

    
    for (int i = 0; i < ALUMNOS; i++) {
        cout << "Alumno " << (i + 1) << ":" << endl;
        for (int j = 0; j < EXAMENES; j++) {
            cout << "  Nota examen " << (j + 1) << " (0.0 - 5.0): ";
            cin >> notas[i][j];
        }
    }

    
    for (int i = 0; i < ALUMNOS; i++) {
        int examenesGanados = 0;

        for (int j = 0; j < EXAMENES; j++) {
            if (notas[i][j] >= NOTA_APROBATORIA) {
                examenesGanados++;
            }
        }

        if (examenesGanados == EXAMENES) {
            ganaronTodos++;
        }
        if (examenesGanados >= 1) {
            ganaronAlMenosUno++;
        }
        if (notas[i][EXAMENES - 1] >= NOTA_APROBATORIA) {
            ganaronUltimo++;
        }
    }

    cout << "\nResultados:" << endl;
    cout << "Numero de alumnos que ganaron los tres examenes: " << ganaronTodos << endl;
    cout << "Numero de alumnos que ganaron al menos un examen: " << ganaronAlMenosUno << endl;
    cout << "Numero de alumnos que ganaron el ultimo examen: " << ganaronUltimo << endl;

    return 0;
}
