#include <iostream>
using namespace std;

// Funzione che cerca un determinato valore in un array di interi.
// Resituisce true se trova il valore, false se non lo trova.
// NOTA: la ricerca binaria richiede che l'array e' gia' ordinato!!
//
// Argomenti della funzione:
//   * valore  => il numero da cercare
//   * arr     => array in cui cercare il numero
//   * dim_arr => lunghezza dell'array
bool ricerca_binaria(int valore, int arr[], int dim_arr) {
    int inizio = 0;
    int fine = dim_arr - 1;
    int meta;

    bool trovato = false;
    do {
        meta = (inizio + fine) / 2;
        // cout << "inizio " << inizio << ", fine " << fine << ", meta " << meta << endl;

        if (arr[meta] > valore)      fine = meta - 1;
        else if (arr[meta] < valore) inizio = meta + 1;
        else                         trovato = true;
    } while (!trovato && inizio < fine);

    if (arr[inizio] == valore) trovato = true;
    return trovato;
}

int main()
{
    int dim = 5;
    int a[] = {1, 3, 5, 23, 256};

    int da_cercare;
    cout << "Inserisci numero da cercare: ";
    cin >> da_cercare;

    bool trovato = ricerca_binaria(da_cercare, a, dim);
    if (trovato)
        cout << "array contiene " << da_cercare << endl;
    else
        cout << "array non contiene " << da_cercare << endl;

    return 0;
}


