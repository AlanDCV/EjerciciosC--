#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double a, b, c, d, x1, x2;

	cout << "Numero a: "; cin >> a;
	cout << "Numero b: "; cin >> b;
	cout << "Numero c: "; cin >> c;

	d = pow(b, 2.0) + 4 * a * c;

	if (a != 0) {
		x1 = (-b + pow(d, (1 / 2)));
		x2 = (-b - pow(d, (1 / 2)));
	}
	else {
		x1 = 0;
		x2 = 0;
	}
		
	cout << '\n';
	cout << "X1: " << x1;
	cout << "\nX2: " << x2 << endl;



	return 0;
}