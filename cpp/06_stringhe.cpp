#include <iostream>

using namespace std;

int main() {
    // in C le stringhe sono semplicemente degli array di caratteri
    char stringa_c[] = "hey";

    cout << stringa_c[0] << "\n"; // 'h'
    cout << stringa_c[1] << "\n"; // 'e'
    cout << stringa_c[2] << "\n"; // 'y'

    // in C++ e' stato aggiunto il tipo string
    string s = "yo";
    cout << "lunghezza prima: " << s.length() << "\n";
    // modifico la stringa
    s = s + " bro";
    cout << "lunghezza dopo: " << s.length() << "\n";

    // posso comunque accedere ai singoli caratteri come se fosse un array
    for (int i = 0; i < s.length(); i++) {
        cout << s[i] << "\n";
    }

    return 0;
}

