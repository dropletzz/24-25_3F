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

    // riempi un array con numeri casuali tra 0 e 99
    int a[10];
    for (int i = 0; i<10; i++) {
        a[i] = rand() % 100;
    }

    return 0;
}

