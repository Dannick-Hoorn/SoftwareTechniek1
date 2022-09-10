#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int voldoendes = 0;
	int onvoldoendes = 0;
	int totaal = 0;
	double cijfer;

	cout << "Voer cijfer in: ";
	cin >> cijfer;
	cin.get();

	while (cijfer != 0) {
		if (cijfer < 0 || cijfer > 10) {
		cout << "Voer een geldig cijfer in s.v.p. \n";
		}
		else if (cijfer >= 5.5) {
			voldoendes++;
			totaal++;
		}
		else {
			onvoldoendes++;
			totaal++;
		}
		cout << "Voer cijfer in (voer 0 in om af te sluiten): ";
		cin >> cijfer;
		cin.get();
	}
	
	cout << "Voldoendes: " << voldoendes << "\n" << "Onvoldoendes: " << onvoldoendes << "\n" << "Totaal: " << totaal << "\n";
}