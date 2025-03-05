#include <iostream>
using namespace std;

int main() {

	int h, m, s;

	cout << "Hora: "; cin >> h;
	cout << "Minuto: "; cin >> m;
	cout << "Segundo: "; cin >> s;

	s += 1;
	if (s == 60) {
		s = 0;
		m += 1;
		if (m == 60) {
			m = 0;
			h += 1;
			if (h == 24) {
				h = 0;
			}
		}
	}

	cout << '\n';
	cout << "------------------------------";
	cout << '\n';
	cout << '\n';
	cout << "Hora : " << h;
	cout << "\nMinuto: " << m;
	cout << "\nSegundo: " << s;

	return 0;
}