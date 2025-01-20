#include "iostream"
using namespace std;

int main() {

    string s = "cerca l'ago nel pagliaio";
    int pos;

    ///////////////////////////////////////////
    pos = s.find("ago");

    // string::npos e' il valore restituito da find quando non trova niente
    if (pos == string::npos) {
        cout << "Ago non trovato" << endl;
    } else {
        cout << "Trovato ago in posizione: " << pos << endl;
    }


    ///////////////////////////////////////////
    pos = s.find("mago");

    if (pos == string::npos) {
        cout << "Mago non trovato" << endl;
    } else {
        cout << "Trovato mago in posizione: " << pos << endl;
    }

    return 0;
}

