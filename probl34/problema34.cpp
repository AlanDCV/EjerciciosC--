#include <iostream>
#include <string>
using namespace std;

int main (){

	char cole, niv;
	int paga;

	cout << "Colegio: "; cin >> cole;
	cout << "Nivel Social: "; cin >> niv;

	if (cole == 'N') {
		if (niv == 'A') {
			paga == 300;
		}
		else if (niv == 'B') {
			paga = 200;
		}
		else if (niv == 'C') {
			paga = 100;
		}
	}
	else if (cole == 'P') {
		if (niv == 'A') {
			paga = 400;
		}
		else if (niv == 'B') {
			paga = 300;
		}
		else if (niv == 'C') {
			paga = 200;
		}
	}

	cout << '\n';
	cout << "Monto a pagar: " << paga << endl;


	return 0;
}