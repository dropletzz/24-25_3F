#include <iostream>

using namespace std;

void bubble_sort(int v[], int len) {
    for (int fine = len-1; fine > 0; fine--) {
        for (int i = 0; i < fine; i++) {
            // scorro l'array a coppie di elementi contigui e, se trovo
            // che il primo e' maggiore del secondo, li scambio
            if (v[i] > v[i+1]) {
                int temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
            }
        }
    }
}

int main() {

    int dim = 5;
    int v[] = { 7, 1, 8, 4, 2 };

    cout << "PRIMA: ";
    for (int i = 0; i < dim; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    bubble_sort(v, dim);

    cout << "DOPO: ";
    for (int i = 0; i < dim; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

