#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int  h, m, s, t;

	const int HORA = 3600;
	const int MINUTO = 60;

	cout << "Tiempo en segundos: "; cin >> t;

	m = (t % HORA) / MINUTO;	
	h = t / HORA;
	s = t % MINUTO;

	cout << "\nMInutos: " << m;
	cout << "\nHoras: " << h;
	cout << "\nSegundos: " << s;




	return 0;
}	 