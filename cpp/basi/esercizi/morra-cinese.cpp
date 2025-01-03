#include <iostream>
using namespace std;

int main() {
    srand(time(NULL)); // inizializzo il generatore di numeri casuali

    int n = rand() % 3;
    string mc; // mossa computer
    if (n == 0) mc = "sasso";
    else if (n == 1) mc = "carta";
    else mc = "forbice";

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
    } else {
        cout << "Hai perso! Torna a baita" << endl;
    }

    return 0;
}


