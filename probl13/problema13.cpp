#include <iostream>

using namespace std;

int main() {

	char c;

	cout << "Ingresa un caracter: "; cin >> c;

	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {

		cout << "\nLa letra " << c << " es una vocal!";
	}
	else {
		cout << "\nLa letra " << c << " no es una vocal";
	}




	return 0;
}