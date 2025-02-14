#include <iostream>
using namespace std;

int main() {

	int n;

	cout << "Numero: "; cin >> n;

	if ((n % 2) == 0) {
		cout << "\nTu numero " << n << " es PAR" << endl;
	}
	else {
		cout << "\nTu numero " << n << " NO es par" << endl;
	}


	return 0;
}