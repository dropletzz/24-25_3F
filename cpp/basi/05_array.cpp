#include <iostream>

using namespace std;

int main() {
    // un array permettere di contenere una sequenza di valori
    // dello stesso tipo in un'unica variabile
    
    // questo array puo' contenere 3 numeri interi
    int a[3];

    // riempio l'array con dei numeri
    a[0] = 3;
    a[1] = 7;
    a[2] = 4;

    // stampo in output il contenuto dell'array
    cout << a[0] << ", " << a[1] << ", "<< a[2] << "\n";

    // un altro modo per definire un array ed inserirvi dei valori
    int numeri[] = { 1, 3, 3, 7 };

    // con un ciclo for scorro tutti gli elementi dell'array e li stampo
    for (int i = 0; i < 4; i++) {
        cout << numeri[i] << ", ";
    }

    return 0;
}

