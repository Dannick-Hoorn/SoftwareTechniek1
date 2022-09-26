#include<iostream>
#include<cmath>

using namespace std;

int main() {
	double a;
	double b;
	double c;
	double disc;

	cout << "Voer a in: ";
	cin >> a;
	cin.get();
	cout << endl;

	cout << "Voer b in: ";
	cin >> b;
	cin.get();
	cout << endl;

	cout << "Voer c in: ";
	cin >> c;
	cin.get();
	cout << endl;

	disc = pow(b, 2) - 4 * a * c;

	cout << "De discriminant = " << disc << endl;
}
//Poah