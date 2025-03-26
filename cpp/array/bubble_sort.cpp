#include <iostream>

using namespace std;

void bubble_sort(int v[], int len) {
    for (int n = len-1; n > 0; n--) {
        for (int i = 0; i < n; i++) {
            if (v[i] > v[i+1]) {
                int temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
            }
        }
    }
}

int main() {

    int v[] = { 7, 1, 8, 4, 2 };

    cout << "PRIMA: ";
    for (int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    bubble_sort(v, 5);

    cout << "DOPO: ";
    for (int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

