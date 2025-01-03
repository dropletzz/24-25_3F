#include <iostream>
using namespace std;

int main() {
    int punti_a = 0; // punteggio di A
    int punti_b = 0; // punteggio di B
    int punti_max; // punteggio da raggiungere
    string chi_ha_fatto_punto;

    cout << "Inserisci il punteggio da raggiungere: ";
    cin >> punti_max;

    do {
        cout << "Chi ha fatto punto? ";
        cin >> chi_ha_fatto_punto;

        if (chi_ha_fatto_punto == "A") {
            punti_a++;
        }
        if (chi_ha_fatto_punto == "B") {
            punti_b++;
        }

        cout << "A: " << punti_a << ", ";
        cout << "B: " << punti_b << endl;
    } while (punti_a < punti_max && punti_b < punti_max);

    if (punti_a > punti_b) {
        cout << "ha vinto A" << endl;
    } else {
        cout << "ha vinto B" << endl;
    }

    return 0;
}

