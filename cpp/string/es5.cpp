#include "iostream"
using namespace std;

int main() {

    string s = "potatoes";
    int c = 0;
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == 't' || s[i] == 'o') c++;
    }
    cout << c << endl;

    return 0;
}

