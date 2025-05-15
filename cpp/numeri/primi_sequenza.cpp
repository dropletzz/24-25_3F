#include <iostream>
using namespace std;

// Idea per velocizzare il calcolo: per controllare se num e' primo
// provo a dividerlo solo per i numeri primi gia' calcolati in precedentemente.
//
// Argomenti della funzione:
//   num => numero da controllare (se e' primo o no)
//   primi => array contenente tutti i numeri primi minori di num
//   len => lunghezza dell'array primi
bool controllo_primo_veloce(int num, int primi[], int len) {
    for (int i = 1; i < len; i++) {
        if (primi[i] > num/2) break;

        if (num % primi[i] == 0) {
            return false;
        }
    }
    return true;
}

#define MAX_SIZE 4096

// questo programma riceve in input un numero n e riempie
// un array con i primi n numeri primi (partendo da 1)
int main() {
    int arr[MAX_SIZE]; // array da riempire 
    int i = 0; // indice del prossimo numero primo da inserire nell'array
    int x = 1; // numero che, se e' primo, viene inserito nell'array
    int n;
    cout << "Inserisci n: ";
    cin >> n;
    if (n > MAX_SIZE) {
        cout << "n deve essere <= " << MAX_SIZE << endl;
        return 1;
    }

    while (i < n) {
        if (controllo_primo_veloce(x, arr, i)) {
            arr[i] = x;
            i++;
        }
        x++;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

