#include "iostream"
using namespace std;

int main() {

    string s = "Ciao";
    int x = 0;
    while (x < 3) {
        s += "!";
        x++;
    }
    cout << s << endl;

    return 0;
}

