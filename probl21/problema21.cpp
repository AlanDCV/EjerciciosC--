#include <iostream>
using namespace std;

int main() {

	int temp;
	string clima;

	cout << "Temperatura: "; cin >> temp;

	if (temp < 10)
		clima = "Frio";
	if (temp > 10 && temp <= 20)
		clima = "Nublado";
	if (temp >= 21 && temp < 30) 
		clima = "Calor";
	if (temp > 30)
		clima = "Tropical";

	cout << '\n';
	cout << "Tipo de clima: " << clima;

	return 0;
}