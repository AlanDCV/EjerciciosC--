#include <iostream>
#include <cmath>
using namespace std;

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {

	double a, r;

	cout << "Radio: "; cin >> r;

	a = M_PI * (pow(r, 2));

	cout << "\nArea: " << a;

	return 0;
}