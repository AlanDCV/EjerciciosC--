#include <iostream>
using namespace std;

int main() {

	int n;

	cout << "Numero: "; cin >> n;

	if (n > 0)
		cout << '\n' << n << " es un numero positivo";

	if (n < 0)
		cout << '\n' << n << " es un numero negativo";

	if (n == 0)
		cout << '\n' << n << " es un numero neutro";

		return 0;
}