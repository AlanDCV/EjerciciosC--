#include <iostream>
#include <string>
using namespace std;

int main() {

	char l;
	string r;

	cout << "Letra: "; cin >> l;

	if (l == 'A' || 'a') {
		r = "Es vocal!";
	}
	else if (l == 'E' || 'e') {
		r = "Es vocal!";
	}
	else if (l == 'I' || 'i') {
		r = "Es vocal!";
	}
	else if (l == 'O' || 'o') {
		r = "Es vocal!";
	}
	else if (l == 'U' || 'u') {
		r = "Es vocal!";
	}
	else {
		r = "No es vocal";
	}

	cout << '\n';
	cout << "Resultado: " << r << endl;

	return 0;
}