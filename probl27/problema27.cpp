#include <iostream>
using namespace std;

int main() {

	int n;
	string a;

	cout << "Numero: "; cin >> n;

	switch (n) {
	case 1:
		a = "Uno";
		break;
	case 2:
		a = "Dos";
		break;
	case 3:
		a = "Tres";
		break;
	case 4:
		a = "Cuatro";
		break;
	case 5:
		a = "Cinco";
		break;
	case 6:
		a = "Seis";
		break;
	case 7:
		a = "Siete";
		break;
	case 8:
		a = "Ocho";
		break;
	case 9:
		a = "Nueve";
		break;
	case 10:
		a = "Diez";
		break;
	}

	cout << '\n';
	cout << "Letra: " << a << endl;

	return 0;
}