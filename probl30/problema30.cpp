#include <iostream>
#include <string>
using namespace std;

int main() {

	int m;
	string r;

	cout << "Mes: "; cin >> m;

	switch (m) {
		case 1:
		case 2:
		case 3:
			r = "Verano";
			break;
		case 4:
		case 5:
		case 6:
			r = "Otoño";
			break;
		case 7:
		case 8:
		case 9: 
			r = "Invierno";
			break;
		case 10:
		case 11: 
		case 12:
			r = "Primavera";
			break;
	}

	cout << '\n';
	cout << "Estacion del año: " << r << endl;

	return 0;
}