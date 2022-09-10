#include <iostream>
using namespace std;

int main() {

	double cijfer;

	for (int count = 0; count < 5; count++) {
		cout << "Voer cijfer in: ";
		cin >> cijfer;
		cin.get();
		if (cijfer > 5.4) {
			cout << "Voldoende \n";
		}
		else {
			cout << "Onvoldoende \n";
		}
	}
	return 0;
}