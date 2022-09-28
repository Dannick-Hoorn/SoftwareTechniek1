#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//constanten en beginwaarden
	const long double totaaloppinmeter = 30000000000000;
	int jaar = 2000;
	long double bevolking = 6000000000;
	const double groeifactor = 1.014;
	//variabelen
	long double oppervlakteppinmeter = totaaloppinmeter / bevolking;

	cout << setw(15) << "Jaar:";
	cout << setw(20) << "Bevolking:";
	cout << setw(25) << "Oppervlakte pp in m^2: \n";
	
	while (oppervlakteppinmeter > 10 ) {
		cout << setw(15) << jaar;
		cout << setw(20) << scientific << setprecision(3) << showpoint << bevolking;
		cout << setw(15) << fixed << oppervlakteppinmeter << "\n";
		
		bevolking *= groeifactor;
		oppervlakteppinmeter = totaaloppinmeter / bevolking;
		jaar++;
	}
	return 0;
}