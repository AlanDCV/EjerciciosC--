#include <iostream>
#include <string>
using namespace std;

int main() {

	int d, m;
	string e;

	cout << "Dia: "; cin >> d;
	cout << "Mes: "; cin >> m;

	switch (m) {
		case 1:
		case 2:
		case 3:
			e = "Verano";
			if (m == 3 && d > 20)
				e = "Otonio";
			break;
		case 4:
		case 5:
		case 6:
			e = "Otonio";
			if (m == 6 && d > 21)
				e = "Invierno";
			break;
		case 7:
		case 8:
		case 9:
			e = "Invierno";
			if (m == 9 && d > 22)
				e = "Primavera";
			break;
		case 10:
		case 11:
		case 12:
			e = "Primavera";
			if (m == 12 && d > 20)
				e = "Verano";
	}

	cout << '\n';
	cout << "Estacion: " << e << endl;


	return 0;
}