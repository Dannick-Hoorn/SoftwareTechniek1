#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double geld = 1000.00;
	double factor = 1.005;

	cout << setw(15) << "Jaar:" << setw(15) << "Saldo:\n";

	for (int jaar = 2022; jaar < 2033; jaar++) {
		cout << setw(15) << jaar << setw(15) << geld << "\n";
		geld *= factor;
	}
}