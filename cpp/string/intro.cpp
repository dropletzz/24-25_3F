#include "iostream"
using namespace std;

int main() {
    // il tipo char rappresenta un singolo carattere ASCII
    char c = 'x';

    // una stringa e' una sequenza di caratteri
    string s = "stringa di prova";

    // accedo ad un singolo carattere della stringa (esattamente come accedo ad un elemento di un array)
    c = s[2]; // c contiene il carattere 'n'
    
    // s.length() restituisce la lunghezza della stringa s (il numero di caratteri)
    int len = s.length();
    cout << "la stringa s e' lunga " << len << " caratteri" << endl;

    // stampo i caratteri della stringa uno alla volta
    for (int i = 0; i < s.length(); i++) {
        cout << s[i] << endl;
    }

    // TODO concatenazione stringhe

    return 0;
}

