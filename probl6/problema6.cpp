#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, ni, r;

	cout << "Numero: "; cin >> n;

	r = n % 10;
	n = n / 10;
	ni = r * 10;

	r = n % 10;
	n = n / 10;
	ni = (ni + r) * 10;

	r = n % 10;
	n = n / 10;
	ni = (ni + r) * 10;

	r = n % 10;
	n = n / 10;
	ni = (ni + r) * 10;

	r = n % 10;
	n = n / 10;
	ni = ni + r;

	cout << "\nNumero inverso: " << ni;


	return 0;
}
