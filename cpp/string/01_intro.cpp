#include "iostream"
using namespace std;

int main() {
    // il tipo char rappresenta un singolo carattere ASCII
    char c = 'x'; // apici singoli per i char

    // una stringa e' una sequenza di caratteri
    string s = "stringa di prova"; // apici doppi per le string

    // s.length() restituisce la lunghezza della stringa s (il numero di caratteri)
    int len = s.length();
    cout << "La stringa s e' lunga " << len << " caratteri" << endl;

    // accedo ad un singolo carattere della stringa (esattamente come accedo ad un elemento di un array)
    c = s[2]; // c contiene il carattere 'r'

    // stampo i caratteri della stringa uno alla volta
    for (int i = 0; i < s.length(); i++) {
        cout << s[i] << endl;
    }

    // modifico la stringa: il + concatena le stringhe
    s = "sono una " + s; // "sono una stringa di prova"
    cout << "Lunghezza dopo la modifica: " << s.length() << endl;

    return 0;
}

