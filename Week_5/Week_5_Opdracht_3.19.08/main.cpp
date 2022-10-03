#include <iostream>

using namespace std;

void max(double a, double b, double &m);

int main() {
	double getal1;
	double getal2;
	double m;

	cin >> getal1;
	cin.get();
	cin >> getal2;
	cin.get();

	max(getal1, getal2, m);

	cout << "Grootste getal: " << m << endl;
	
	return 0;
}

void max(double a, double b, double &m) {
	if (a > b) {
		m = a;
	}
	else if (b > a) {
		m = b;
	}
	else {
		cout << "Gelijke getallen gedetecteerd \n";
		m = 0;
	}
}