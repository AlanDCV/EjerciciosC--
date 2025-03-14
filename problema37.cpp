#include <iostream>
#include <string>
using namespace std;

int main() {

	int d1, d2, d3;
	string p;

	cout << "Dado 1: "; cin >> d1;
	cout << "Dado 2: "; cin >> d2;
	cout << "Dado 3: "; cin >> d3;

	if (d1 == 6 && d2 == 6 && d3 == 6) {
		p = "Oro";
	}
	else if ((d1 == 6 && d2 == 6) || (d1 == 6 && d3 == 6) || (d2 == 6 && d3 == 6)) {
		p = "Plata";
	}
	else if (d1 == 6 || d2 == 6 || d3 == 6)
		p = "Bronze";

	cout << "\nPuntaje: " << p << endl;



	return 0;
}