#include "iostream"
using namespace std;

int main() {

    string s = "uova farina acqua zucchero";
    string sub;

    // parte dalla posizione 5 ed estrae tutti i caratteri
    // fino alla fine della stringa
    sub = s.substr(5); // "farina acqua zucchero"
    cout << sub << endl;

    // parte dalla posizione 5 ed estrae 6 caratteri
    sub = s.substr(5, 6); // "farina"
    cout << sub << endl;

    return 0;
}

