#include <iostream>
using namespace std;

// Funzione che cerca un determinato valore in un array di interi.
// Resituisce true se trova il valore, false se non lo trova.
//
// Argomenti della funzione:
//   * valore  => il numero da cercare
//   * arr     => array in cui cercare il numero
//   * dim_arr => lunghezza dell'array
bool ricerca_sequenziale(int valore, int arr[], int dim_arr) {
    // scorro tutto l'array
    for (int i = 0; i < dim_arr; i++) {
        // se trovo il valore restituisco true
        if (valore == arr[i]) return true;
    }
    // se il ciclo termina vuol dire che valore non e' presente nell'array
    return false;
}

int main()
{
    int dim = 5;
    int a[] = {1, 3, 5, 23, 256};

    int da_cercare;
    cout << "Inserisci numero da cercare: ";
    cin >> da_cercare;

    if (ricerca_sequenziale(da_cercare, a, dim))
        cout << "array contiene " << da_cercare << endl;
    else
        cout << "array non contiene " << da_cercare << endl;

    return 0;
}

