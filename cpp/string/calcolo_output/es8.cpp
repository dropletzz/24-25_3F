#include "iostream"
using namespace std;

int main() {

    string s = "01234(567)89";
    int i = 0;
    while (s[i] != '(') {
        i++;
    }
    i++;
    while (s[i] != ')') {
        cout << s[i];
        i++;
    }
    cout << endl;

    return 0;
}

