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

void ordina_per_eta_decrescente(Giocatore arr[], int dim) {
    for (int x=0; x<dim; x++) {
        for (int i=0; i<dim-1; i++) {
            if (arr[i].eta < arr[i+1].eta) {
                Giocatore tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
    }
}

void media_gol_di_chi_ha_meno_di_20_anni(Giocatore arr[], int dim) {
    int count = 0;
    int somma = 0;

    for (int i=0; i<dim-1; i++) {
        if (arr[i].eta < 20) {
            somma = somma + arr[i].gol;
            count++;
        }
    }

    if (count > 0) {
        float media = (float) somma / count;
        cout << "media = " << media << endl;
    }
    else {
        cout << "nessun giocatore ha meno di 20 anni" << endl;
    }
}

void stampa(Giocatore arr[], int dim) {
    for (int i=0; i<dim; i++) {
        cout << "nome: " << arr[i].nome << ", ";
        cout << "eta: " << arr[i].eta << endl;
    }
}

// funzione usata per fare dei test senza inserire
// ogni volta tutti i dati dei giocatori
void inserisci_giocatori_di_test(Giocatore arr[]) {
    Giocatore g1, g2, g3;

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

    g3.nome = "Mkhitaryan";
    g3.eta = 36;
    g3.gol = 3;
    g3.assist = 5;
    g3.partite = 30;
    g3.squadra = "Internazionale Milano";

    // metto i giocatori nell'array
    arr[0] = g1;
    arr[1] = g2;
    arr[2] = g3;
}

int main() {
    int dim = 3;
    Giocatore arr[dim];
    inserisci_giocatori_di_test(arr);

    int scelta;
    do {
        cout << "\nMENU:" << endl;
        cout << "1 -> inserisci i dati dei giocatori" << endl;
        cout << "2 -> calcola l'eta media" << endl;
        cout << "3 -> giocatore che ha fatto piu' gol" << endl;
        cout << "4 -> giocatore che ha giocato meno partite" << endl;
        cout << "5 -> ordina i giocatori per eta' e stampali" << endl;
        cout << "0 -> esci" << endl;

        cout << "Scegli un'opzione: ";
        cin >> scelta;

        switch (scelta) {
            case 1: {
                // DA FARE
                break;
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
            case 5: {
                ordina_per_eta_decrescente(arr, dim);
                stampa(arr, dim);
                break;
            }
        }
    } while (scelta != 0);

    return 0;
}

