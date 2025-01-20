#include "iostream"
using namespace std;

int main() {

    string s;
    cout << "Inserisci una stringa: ";
    getline(std::cin, s); // ricevo in input una stringa

    ////////////////////////////////////////////////////////////////
    // stampa "trovato un saluto" se la stringa s contiene la parola "ciao"
    // altrimenti stampa "nessun saluto" (usa il metodo find)
    // TODO

    ////////////////////////////////////////////////////////////////
    // in s1 ed s2 inserisci, rispettivamente, la prima e la seconda meta'
    // della stringa e stampale (usa il metodo substr)
    string s1, s2;
    // TODO

    ////////////////////////////////////////////////////////////////
    // stampa il numero di volte che la parola "ciao" compare nella stringa s
    // (usa i metodi substr e find)
    // TODO

    ////////////////////////////////////////////////////////////////
    // trova nella stringa s la prima parte contenuta tra parentesi quadre e stampala
    // (usa i metodi substr e find)
    //
    // ESEMPIO:
    // s="sono veramente euforico", non stampa niente
    // s="sono [veramente] euforico", stampa "veramente"
    // TODO

    ////////////////////////////////////////////////////////////////
    // trova nella stringa s tutte le parti contenute tra parentesi quadre e stampale separate da spazi
    // (usa i metodi substr e find)
    //
    // ESEMPIO:
    // s="uno [due] tre [quattro] cinque", stampa: "due quattro"
    // TODO

    return 0;
}

