#include <iostream>
using namespace std;


int main() {

	float consu, desc, imp, costo;

	cout << "Consumo: "; cin >> consu;

	
	if (consu <= 100) {
		desc = consu * 0.10;
	
	}
	else {
		desc = consu * 0.20;
	}
	
	imp = (consu - desc) * 0.19;
	costo = (consu - desc) + imp;

	cout << '\n';
	cout << "Impuesto: " << imp;
	cout << "\nDescuento: " << desc;
	cout << "\nCosto final: " << costo;

}