#include "iostream"
using namespace std;

int main() {

    string s = "lala,ciao,prova";
    int i = 0;
    while (s[i] != ',') {
        i++;
    }
    cout << i << endl;

    return 0;
}

