#include <iostream>
using namespace std;

int main() {

	int n;

	cout << "Numero: "; cin >> n;

	if ((n % 3) == 0 && (n % 5) == 0) {

		cout << "\nEl numero " << n << " es multiplo de 3 y 5" << endl;
	}
	else {
		cout << "\nEl numero " << n << " NO es multiplo de 3 y 5" << endl;
	}


	return 0;
}