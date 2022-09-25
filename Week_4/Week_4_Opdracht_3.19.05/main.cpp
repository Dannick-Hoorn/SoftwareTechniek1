#include<iostream>

using namespace std;

double omzetting_1(double x) {
	//omzetting van l/100km naar 1 op l
	double output = 100 / x;
	return output;
}

double omzetting_2(double x) {
	//omzetting van 1 op l naar l/100km
	double output = 1 / x * 100;
	return output;
}

int main() {
	char invoer;
	double uitvoer;
	double getal;

	cout << "Wilt u omzetten van l/100km naar km/l of van km/l naar l/100km? Voer A in voor optie 1, voer B in voor optie 2." << endl;
	cin >> invoer;
	cin.get();
	
	switch (invoer) {
		case 'a': case 'A': 
			
			cout << "Voer het getal in wat u wilt omzetten: ";
			cin >> getal;
			cin.get();
			cout << endl;

			uitvoer = omzetting_1(getal);
			cout << "Dit is hetzelfde als 1 op " << uitvoer;
			break;

		case 'b': case 'B':

			cout << "Voer het getal in wat u wilt omzetten: ";
			cin >> getal;
			cin.get();
			cout << endl;

			uitvoer = omzetting_2(getal);
			cout << "Dit is hetzelfde als " << uitvoer << " liter per 100 kilometer";
			break;

		default:
			cout << "Geen geldige keuze gemaakt. Kies a.u.b. uit optie 1 of optie 2, A of B";
			break;
	}
}