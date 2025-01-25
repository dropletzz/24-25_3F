#include <iostream>

using namespace std;

bool controllo_primo(int num) {
    for (int x = 2; x < num/2; x++) {
        if (num % x == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "inserisci un numero: ";
    cin >> n;

    // stampo i numeri primi compresi tra 0 ed n
    for (int i = 0; i <= n; i++) {
        if (controllo_primo(i)) {
            cout << i << endl;
        }
    }

    return 0;
}





