#include "iostream"
using namespace std;

int main() {

    string s = "potatoes";
    for (int x = 0; x <= 5; x++) {
        if (x > 2) cout << s[x];
    }
    cout << endl;

    return 0;
}

