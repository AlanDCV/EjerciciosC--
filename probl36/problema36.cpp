#include <iostream>
#include <string>
using namespace std;

int main(){

	int p, c, precio;

	cout << "Calidad: "; cin >> c;
	cout << "Producto: "; cin >> p;

	switch (c) {
		case 1:
			switch (p) {
				case 1:
					precio = 5000;
					break;
				case 2:
					precio = 4500;
					break;
				case 3:
					precio = 4000;
					break;
			}
			break;
		case 2:
			switch (p) {
				case 1:
					precio = 4500;
					break;
				case 2:
					precio = 4000;
					break;
				case 3:
					precio = 3500;
					break;
			}
			break;
		case 3:
			switch (p) {
				case 1:
					precio = 4000;
					break;
				case 2:
					precio = 3500;
					break;
				case 3:
					precio = 3000;
					break;
			}
			break;
	}

	cout << '\n';
	cout << "Precio: " << precio << endl;


	return 0;
	}