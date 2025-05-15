#include <iostream>
#include <cmath>
using namespace std;

struct Punto {
	double x;
	double y;
};

void stampa_punto(Punto p, string nome) {
	cout << nome << " = (" << p.x << ", " << p.y << ")" << endl;
}

double distanza(Punto p, Punto q) {
	double dx = p.x - q.x;
	double dy = p.y - q.y;
	return sqrt(dx*dx + dy*dy);
}

Punto medio(Punto p, Punto q) {
    double xm = (p.x + q.x) / 2;
    double ym = (p.y + q.y) / 2;
    return Punto { xm, ym };
}

int main() {
	Punto a = { 3, 2 };
	Punto b = { 0, 3 };

	stampa_punto(a, "A");
	stampa_punto(b, "B");

    // distanza
	double dist = distanza(a, b);
	cout << "Distanza tra A e B = " << dist << endl;

    // punto medio
    Punto m = medio(a, b);
    stampa_punto(m, "Punto medio");

    // retta passante
    if (a.x == b.x) {
        cout << "Retta passante: x = " << a.x << endl;
    }
    else {
        double m, q;
        m = (b.y - a.y) / (b.x - a.x);
        q = a.y - m*a.x;
        cout << "Retta passante: y = " << m << "*x + " << q << endl;
    }

	return 0;
}

