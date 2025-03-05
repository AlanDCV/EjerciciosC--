#include <iostream>
using namespace std;

int main() {

	int n;
	string e;

	cout << "Numero de estacion (del 1 al 4): "; cin >> n;

	switch (n) {
	case 1:
		e = "Verano";
		break;
	case 2:
		e = "Otoño";
		break;
	case 3:
		e = "Invierno";
		break;
	case 4:
		e = "Primavera";
		break;

	}

	cout << '\n';
	cout << "Estacion: " << e << endl;

	return 0;
}