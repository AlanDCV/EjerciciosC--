#include <iostream>
#include <string>
using namespace std;

int main() {

	int mes, a, dia;
	string rtames;

	cout << "Mes: "; cin >> mes;
	cout << "Anio: "; cin >> a;

	switch (mes) {
		case 1:
			dia = 30;
			rtames = "Enero";
			break;
		case 2:
			if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)) {
				dia = 29;
			}
			else {
				dia = 28; 
			}
			rtames = "Febrero";
			break;
		case 3:
			dia = 31;
			rtames = "Marzo";
			break;
		case 4: 
			dia = 30;
			rtames = "Abril";
			break;
		case 5:
			dia = 31;
			rtames = "Mayo";
			break;
		case 6:
			dia = 30;
			rtames = "Junio";
			break;
		case 7:
			dia = 31;
			rtames = "Julio";
			break;
		case 8:
			dia = 31;
			rtames = "Agosto";
			break;
		case 9:
			dia = 30;
			rtames = "Septiembre";
			break;
		case 10:
			dia = 31;
			rtames = "Octubre";
			break;
		case 11:
			dia = 30;
			rtames = "Noviembre";
			break;
		case 12:
			dia = 31;
			rtames = "Diciembre";
			break;
	}

	cout << '\n';
	cout << "Dias: " << dia;
	cout << "\nMes: " << rtames << endl;

	return 0;
}