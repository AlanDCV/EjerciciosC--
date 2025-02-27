#include <iostream>
#include <string>
using namespace std;

int main(){

	int mc, desc, total, recargo;
	string ClienG, ClienA, fp, tipoc;


	cout << "Monto de costo: "; cin >> mc;
	cout << "Tipo de cliente: "; cin >> tipoc;
	cout << "Forma de pago: "; cin >> fp;

	if (tipoc == "A" && fp == "C") {
		desc = mc * 0.20;
	}
	else (tipoc == "A" && fp == "P"); {
		recargo = mc * 0.05;
	}

	if (tipoc == "G" && fp == "C") {
		desc = mc * 0.15;
	}
	else(tipoc == "G" && fp == "P"); {
		recargo = mc * 0.10;
	}



	if (fp == "C") {

		total = mc - desc;

		cout << '\n';
		cout << "Descuento: " << desc;
		cout << "\nTotal a pagar: " << total << endl;

	}

	if (fp == "P") {

		total = mc + recargo;

		cout << '\n';
		cout << "Recargo: " << recargo;
		cout << "\nTotal a pagar: " << total << endl;

	}




	return 0;
	}