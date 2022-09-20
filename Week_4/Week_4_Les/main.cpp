#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
	double x = 0;
	double i = 0;

	cout << "Voer getal in: ";
	cin >> i;
	cin.get();

	x = sqrt(i);

	cout << "De wortel van " << i << " is " << x << "\n";

	return 0;
}