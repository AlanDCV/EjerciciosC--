#include <iostream>
using namespace std;

int main(){

	char op;
	int n1, n2, r;

	cout << "Operacion: "; cin >> op;
	cout << "Numero 1: "; cin >> n1;
	cout << "Numero 2: "; cin >> n2;

	if (op == '-') {
		r = n1 - n2;
	}
	else if (op == '+') {
		r = n1 + n2;
	}
	else if (op == '/') {
		r = n1 / n2;
	}
	else if (op == '*') {
		r = n1 * n2;
	}

	cout << '\n';
	cout << "Resultado: " << r << endl;

	return 0;
}