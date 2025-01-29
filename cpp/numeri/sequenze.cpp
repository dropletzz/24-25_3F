#include <iostream>
using namespace std;

void stampa_array(int a[], int len) {
    for (int i = 0; i < len; i++) {
        cout << a[i] << ", ";
    }
    cout << endl;
}

int main() {
    // Ricevere in input un numero N, che indica la lunghezza di un array,
    // e riempirlo con le seguenti sequenze di numeri.
    int n;
    cout << "Inserisci n: ";
    cin >> n;

    int arr[n]; // array da riempire
    int x;

    cout << "\nEsercizio A" << endl;
    // 2, 4, 6, 8, 9, 10, ... (tutti i numeri pari partendo da 2)
    x = 2;
    for (int i = 0; i < n; i++) {
        arr[i] = x;
        x = x + 2;
    }
    stampa_array(arr, n);

    cout << "\nEsercizio B" << endl;
    // 1, 3, 6, 9, 12, ... (parto da 1 e poi tutti i multipli di 3)
    for (int i = 0; i < n; i++) {
        if (i == 0) arr[i] = 1;
        else arr[i] = i * 3;
    }
    stampa_array(arr, n);

    cout << "\nEsercizio C" << endl;
    // 2, 4, 8, 16, 32, 64, ... (tutte le potenze di 2)
    for (int i = 0; i < n; i++) {
        if (i == 0) arr[i] = 2;
        else arr[i] = arr[i-1] * 2;
    }
    stampa_array(arr, n);

    cout << "\nEsercizio D" << endl;
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ...
    // (sequenza di Fibonacci: ogni numero e’ uguale alla somma dei due precedenti, i primi due numeri sono sempre 0 e 1)
    for (int i = 0; i < n; i++) {
        if (i == 0) arr[i] = 0;
        else if (i == 1) arr[i] = 1;
        else arr[i] = arr[i-2] + arr[i-1];
    }
    stampa_array(arr, n);


    return 0;
}

