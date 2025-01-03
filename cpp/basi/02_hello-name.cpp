// necessario per fare input/output usando cin e cout
#include <iostream>

// per evitare di scrivere std:: prima di cin, cout e string
using namespace std;

int main() {
    // definisco una variabile "nome" di tipo string
    string nome;

    // stampo un messaggio in output
    cout << "Come ti chiami? ";

    // ricevo un input e lo metto nella variabile "nome"
    cin >> nome;

    // saluto il nome inserito
    cout << "Ciao, " << nome << "!\n";

    return 0;
}

