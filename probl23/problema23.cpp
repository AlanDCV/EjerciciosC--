#include <iostream>
using namespace std;

int main() {

	float a, b, x;

	cout << "Numero a: "; cin >> a;
	cout << "Numero b: "; cin >> b;

	if (a != 0) {
		x = -b / a;
	}
	else {
		x = 0;
	}

	cout << '\n';
	cout << "Numero x: " << x << endl;

	return 0;
}