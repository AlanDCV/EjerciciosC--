#include <iostream>
using namespace std;

int main() {

	float consu, desc, costo, imp;

	cout << "Consumo: "; cin >> consu;

	if (consu <= 100)
		desc = consu * 0.1;

	if (consu > 100 && consu < 200) {
		desc = consu * 0.2;
	}
	else(consu > 200); {
		desc = consu * 0.3;
	}

	imp = (consu - desc) * 0.19;
	costo = (consu - desc) + imp;

	cout << '\n';
	cout << "Descuento: " << desc;
	cout << "\nImpuesto: " << imp;
	cout << "\nCosto final: " << costo;


	return 0;
}