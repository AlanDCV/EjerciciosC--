#include <iostream>
#include <string>
using namespace std;

int main(){

	int mc, desc, total1, total2, recargo;
	string ClienG, ClienA, fp, tipoc;


	cout << "Monto de costo: "; cin >> mc;
	cout << "Tipo de cliente: "; cin >> tipoc;
	cout << "Forma de pago: "; cin >> fp;

	if (tipoc == "A" && fp == "C") {
		desc = mc * 0.20;
	}
	else if(tipoc == "A" && fp == "P"){
		recargo = mc * 0.05;
	}
	
	if (tipoc == "G" && fp == "C") {
		desc = mc * 0.15;
	}
	else if (tipoc == "G" && fp == "P"){
		recargo = mc * 0.10;
	}



	if (fp == "C") {

		total1 = mc - desc;

		cout << '\n';
		cout << "Descuento: " << desc;
		cout << "\nTotal a pagar: " << total1 << endl;

	}
	
	if (fp == "P") {

		total2 = mc + recargo;

		cout << '\n';
		cout << "Recargo: " << recargo;
		cout << "\nTotal a pagar: " << total2 << endl;

	}




	return 0;
	}