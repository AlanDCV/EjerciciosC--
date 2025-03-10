#include <iostream>
#include <string>
using namespace std;

int main() {

	int pun;
	string r;

	cout << "Puntaje: "; cin >> pun;

	if (pun >= 100) {
		r = "Sistemas";
	}
	else if (pun >= 90) {
		r = "Electronica";
	}
	else if (pun >= 80) {
		r = "Industrial";
	}
	else if (pun >= 70) {
		r = "Administracion";
	}

	cout << '\n';
	cout << "Facultad" << r << endl;


	return 0;
}