#include <iostream>

using namespace std;

// funzione che riceve come argomento un numero intero (num)
// e restituisce true se il numero e' primo, altrimenti
// restituisce false (n deve essere un numero positivo)
bool controllo_primo(int num) {
    if (num == 0) return false; // zero non e' un numero primo

    // scorro tutti i numeri da 2 a num/2
    for (int x = 2; x <= num/2; x++) {
        // se trovo un numero che divide num senza resto,
        // allora num non e' primo
        if (num % x == 0) {
            return false;
        }
    }
    // se non ho trovato nessun divisore, il numero e' primo
    return true;
}

int main() {
    int n;
    cout << "inserisci un numero: ";
    cin >> n;

    if (controllo_primo(n)) {
        cout << n << " e' primo" << endl;
    }
    else {
        cout << n << " non e' primo" << endl;
    }

    return 0;
}





