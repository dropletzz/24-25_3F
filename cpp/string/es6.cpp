#include "iostream"
using namespace std;

int main() {

    string s = "hai trovato l'ago nel pagliaio?";

    int pos = s.find("ago");
    if (pos != string::npos) {
        cout << "Trovato in posizione: " << pos << endl;
    } else {
        cout << "Non trovato" << endl;
    }

    return 0;
}

