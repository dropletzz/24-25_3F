#include <iostream>
using namespace std;

int main() {
    float altezza, peso;
    int sovra = 0, sotto = 0, normo = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Inserisci i dati della persona " << i+1 << endl;

        do {
            cout << "Inserisci altezza (in metri): ";
            cin >> altezza;
        } while (altezza < 0);

        do {
            cout << "Inserisci peso (in kg): ";
            cin >> peso;
        } while (peso < 0);

        float bmi = peso / (altezza*altezza);
        cout << "BMI = " << bmi << endl;

        if (bmi > 30) {
            cout << "sovrappeso" << endl;
            sovra++;
        } else if (bmi < 18) {
            cout << "sottopeso" << endl;
            sotto++;
        } else {
            cout << "normopeso" << endl;
            normo++;
        }
    }

    cout << "Totale persone sovrappeso: " << sovra << endl;
    cout << "Totale persone sottopeso: " << sotto << endl;
    cout << "Totale persone normopeso: " << normo << endl;
}

