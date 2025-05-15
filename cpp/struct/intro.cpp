#include <iostream>
using namespace std;

// definizione di una struct
struct Persona {
    string nome;
    string cognome;
    int eta;
    double altezza;
};

void stampa_persona(Persona p) {
    cout << p.cognome << " " << p.nome << ", ";
    cout << p.eta << " anni, altezza: " << p.altezza << "m" << endl;
}

int main() {
    // Tre modi per creare una struct:
    
    // 1
    Persona p1;
    p1.nome = "Gino";
    p1.cognome = "Paoli";
    p1.eta = 67;
    p1.altezza = 1.68;

    // 2
    Persona p2 = {
        .nome = "Mina",
        .cognome = "Rossi",
        .eta = 34,
        .altezza = 1.88
    };

    // 3
    Persona p3 = { "Mina", "Catangelo", 14, 1.38 };

    stampa_persona(p1);
    stampa_persona(p2);
    stampa_persona(p3);

    return 0;
}

