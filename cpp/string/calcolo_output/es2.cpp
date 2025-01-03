#include "iostream"
using namespace std;

int main() {

    string s = "Ciao";
    for (int x = 1; x <= 4; x++) {
        if (x % 2 == 0) {
            s += "!";
        } else {
            s += "?";
        }
    }
    cout << s << endl;

    return 0;
}

