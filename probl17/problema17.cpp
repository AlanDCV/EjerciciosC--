#include <iostream>
using namespace std;

int main() {

	int n;

	cout << "Numero: "; cin >> n;

	if ((n % 2) == 0) {
		n = (n * 3);
		cout << "\nResultado: " << n << endl;
	}
	else {
		n = (n * 2);
		cout << "\nResultado: " << n << endl;
	}

	return 0;
}