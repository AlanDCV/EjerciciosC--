#include <iostream>
#include <cmath>
using namespace std;

int main() {

	float c, m, r, i, t;

	cout << "Capital: "; cin >> c;
	cout << "Tasa de interes: "; cin >> r;
	cout << "Tiempo: "; cin >> t;

	m = pow((1 + r / 100), t) * c;
	i = m - c;

	cout << "\nIntereses: " << i;
	cout << "\nMonto: " << m;

	return 0;
}