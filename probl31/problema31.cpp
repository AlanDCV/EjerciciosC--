#include <iostream>
#include <string>
using namespace std;

int main() {

	int p;
	string cat;

	cout << "Promedio: "; cin >> p;

	if (p >= 0 && p <= 5) {
		cat = "Pesimo";
	}
	else if (p >= 6 && p <= 10) {
		cat = "Malo";
	}
	else if (p >= 11 && p <= 14) {
		cat = "Regular";
	}
	else if (p >= 15 && p <= 17) {
		cat = "Bueno";
	}
	else if (p >= 18 && p <= 20) {
		cat = "Excelente";
	}

	cout << '\n';
	cout << "Categoria: " << cat << endl;


	return 0;
}