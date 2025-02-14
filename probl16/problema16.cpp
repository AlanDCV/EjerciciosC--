#include <iostream>
using namespace std;

int main() {

	int n1, n2, n3;

	cout << "Numero 1: "; cin >> n1;
	cout << "Numero 2: "; cin >> n2;
	cout << "Numero 3: "; cin >> n3;

	if (n1 > n2 && n1 > n3)
		cout << "\nEl numero 1 es el mas grande" << endl;
	if (n2 > n1 && n2 > n3)
		cout << "\nEl numero 2 es el mas grande" << endl;
	if (n3 > n1 && n3 > n2)
		cout << "\nEl numero 3 es el mas grande" << endl;

	return 0;
}