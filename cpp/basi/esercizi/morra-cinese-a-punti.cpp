#include <iostream>
using namespace std;

string mossa(int x) {
    if (x == 0) return "sasso";
    if (x == 1) return "carta";
    return "forbice";
}

int main() {
    srand(time(NULL)); // inizializzo il generatore di numeri casuali
                       //
    int punti_g = 0; // punteggio giocatore
    int punti_c = 0; // punteggio computer
    int punti_max; // punteggio da raggiungere

    cout << "Inserisci il punteggio da raggiungere: ";
    cin >> punti_max;

    do {
        int n = rand() % 3;
        string mc = mossa(n); // mossa computer

        string mg; // mossa giocatore
        cout << "Scegli una mossa (sasso/carta/forbice) ";
        cin >> mg;

        cout << "Mossa computer: " << mc << endl;

        if (mc == mg) {
            cout << "Pareggio" << endl;
        } else if ((mg == "sasso" && mc == "forbice")
                || (mg == "carta" && mc == "sasso")
                || (mg == "forbice" && mc == "carta")) {
            cout << "Hai vinto!" << endl;
            punti_g++;
        } else {
            cout << "Hai perso!" << endl;
            punti_c++;
        }

        cout << "Giocatore: " << punti_g << ", ";
        cout << "Computer: " << punti_c << endl;
    } while (punti_g < punti_max && punti_c < punti_max);

    if (punti_g > punti_c) {
        cout << "Hai vinto la partita!" << endl;
    } else {
        cout << "Hai perso la partita!" << endl;
    }

    return 0;
}

