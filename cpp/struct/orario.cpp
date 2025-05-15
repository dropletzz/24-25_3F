#include <iostream>
using namespace std;

struct Orario {
    int ore;
    int minuti;
};

int leggi_numero_tra(string mess, int min, int max) {
    int numero;
    do {
        cout << mess;
        cin >> numero;
    } while (numero > max || numero < min);
    return numero;
}

Orario leggi_orario() {
    int ore = leggi_numero_tra("Inserisci le ore: ", 0, 23);
    int minuti = leggi_numero_tra("Inserisci i minuti: ", 0, 59);
    return Orario { ore, minuti };
}

int compara_orari(Orario a, Orario b) {
    if (a.ore > b.ore) {
        return 1; // a > b
    }
    else if (a.ore < b.ore) {
        return -1; // a < b
    }
    else if (a.minuti > b.minuti) {
        return 1; // a > b
    }
    else if (a.minuti < b.minuti) {
        return -1; // a < b
    }
    return 0;
}

int main()
{
    Orario o = leggi_orario();
    cout << o.ore << ":" << o.minuti << endl;
    return 0;
}

