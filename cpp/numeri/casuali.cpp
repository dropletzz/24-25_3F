#include <iostream>
#include <random>
using namespace std;

int main() {
    // inizializza il generatore di numeri casuali
    random_device rd;
    srand(rd());

    // numero casuale compreso tra 0 e 2
    int numero_a_caso = rand() % 3;
    cout << numero_a_caso << endl;

    // numero casuale compreso tra 5 e 10
    numero_a_caso = 5 + (rand() % 6);
    cout << numero_a_caso << endl;

    return 0;
}

