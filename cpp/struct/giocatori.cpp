#include <iostream>
using namespace std;

// Quando definisco una struct creo un nuovo tipo
// di variabile. Giocatore e' un tipo di variabile
struct Giocatore {
    string nome;
    int eta;
    int gol;
    int assist;
    int partite;
    string squadra;
};

float eta_media(Giocatore arr[], int dim) {
    float somma = 0;
    for (int i=0; i<dim; i++) {
        Giocatore g = arr[i];
        somma = somma + g.eta;
    }
    return somma / dim;
}

// restituisce il giocatore che ha fatto piu' gol
Giocatore capo_cannoniere(Giocatore arr[], int dim) {
    Giocatore capo = arr[0];
    for (int i=0; i<dim; i++) {
        Giocatore g = arr[i];
        if (g.gol > capo.gol) {
            capo = g;
        }
    }
    return capo;
}

// restituisce il giocatore che ha giocato meno partite
Giocatore meno_partite(Giocatore arr[], int dim) {
    Giocatore min = arr[0];
    for (int i=0; i<dim; i++) {
        Giocatore g = arr[i];
        if (g.partite < min.partite) {
            min = g;
        }
    }
    return min;
}

// funzione usata per fare dei test senza inserire
// ogni volta tutti i dati dei giocatori
void inserisci_giocatori_di_test(Giocatore arr[]) {
    Giocatore g1, g2;

    g1.nome = "Cristiano Ronaldo";
    g1.eta = 40;
    g1.gol = 23;
    g1.assist = 3;
    g1.partite = 28;
    g1.squadra = "Al Nassr";

    g2.nome = "Lionel Messi";
    g2.eta = 37;
    g2.gol = 5;
    g2.assist = 2;
    g2.partite = 8;
    g2.squadra = "Inter Miami";

    // metto i giocatori nell'array
    arr[0] = g1;
    arr[1] = g2;
}

int main() {
    int dim = 2;
    Giocatore arr[dim];

    inserisci_giocatori_di_test(arr);

    int scelta;
    do {
        cout << "\nMENU:" << endl;
        cout << "1 -> inserisci i dati dei giocatori" << endl;
        cout << "2 -> calcola l'eta media" << endl;
        cout << "3 -> giocatore che ha fatto piu' gol" << endl;
        cout << "4 -> giocatore che ha giocato meno partite" << endl;
        cout << "0 -> esci" << endl;

        cout << "Scegli un'opzione: ";
        cin >> scelta;

        switch (scelta) {
            case 1: {
                // DA FARE
            }
            case 2: {
                cout << "eta' media: " << eta_media(arr, dim) << endl;
                break;
            }
            case 3: {
                Giocatore cc = capo_cannoniere(arr, dim);
                cout << cc.nome << " con " << cc.gol << " gol" << endl;
                break;
            }
            case 4: {
                Giocatore mp = meno_partite(arr, dim);
                cout << mp.nome << " con " << mp.partite << " partite giocate" << endl;
                break;
            }
        }
    } while (scelta != 0);

    return 0;
}

