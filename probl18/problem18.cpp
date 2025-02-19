#include <iostream>
using namespace std;

int main() {

	int n1, n2, n3;
	int mayor, menor, medio;

	cout << "Numero 1: "; cin >> n1;
	cout << "Numero 2: "; cin >> n2;
	cout << "Numero 3: "; cin >> n3;

	if (n1 > n2 && n1 > n3) {
		mayor = n1;
	}
	else {
		if (n2 > n3 && n2 > n1) {
			mayor = n1;
		}
		else {
			mayor = n3;
		}
	}
		
	if (n1 < n2 && n1 < n3) {
		menor = n1;
	}
	else {
		if (n2 < n3 && n2 < n1) {
			menor = n2;
		}
		else {
			menor = n3;
		}
	}

	medio = (n1 + n2 + n3) - (mayor + menor);	

	cout << '\n';
	cout << "\nMayor: " << mayor;
	cout << "\nIntermedio: " << medio;
	cout << "\nMenor: " << menor << endl;

	return 0;
}