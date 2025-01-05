#include "iostream"
using namespace std;

int main() {

    string s = "/var/www/html";
    int i = 0;
    int c = 0;
    while (i < s.length()) {
        if (s[i] == '/') c++;
        i++;
    }
    cout << c << endl;

    return 0;
}

