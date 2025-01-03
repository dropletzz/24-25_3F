#include "iostream"
using namespace std;

int main() {

    string s = "cerca l'ago nel pagliaio";

    int pos = s.find("ago");

    if (pos == string::npos) {
        cout << "Non trovato" << endl;
    } else {
        cout << "Trovato in posizione: " << pos << endl;
    }

    return 0;
}

