#include <iostream>
using namespace std;
int main() {

	int n1, n2;

	cout << "Numero 1: "; cin >> n1;
	cout << "Numero 2: "; cin >> n2;

	if (n1 < n2)
		cout << "\nMayor: " << n2;
	if (n1 > n2)
		cout << "\nMayor: " << n1;


	return 0;
}