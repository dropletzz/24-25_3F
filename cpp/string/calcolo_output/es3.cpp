#include "iostream"
using namespace std;

int main() {

    string s = "gattopardo";
    for (int i = 0; i < s.length(); i = i+3) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}

