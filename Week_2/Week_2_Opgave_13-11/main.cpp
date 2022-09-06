#include <iostream>

using namespace std;

int main() {

	double btw_perc = 0.21;
	double bedrag_excl;
	double bedrag_incl;

	std::cout << "Voer bedrag in: \n";
	cin >> bedrag_excl;
	cin.get();
	
	bedrag_incl = bedrag_excl + (bedrag_excl * btw_perc);

	cout << "Het bedrag inclusief BTW is: " << bedrag_incl << "\n";

	return 0;
}

/*
berekent btw op een bedrag en print dat, maar als het bedrag groot is wordt het afgerond, weet niet waarom...
*/