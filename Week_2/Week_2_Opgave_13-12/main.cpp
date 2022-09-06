#include <iostream>

using namespace std;

int main() {

	double btw_perc = 0.21;
	double bedrag_excl;
	double bedrag_incl;
	double btw_bedrag;

	std::cout << "Voer bedrag in: \n";
	cin >> bedrag_incl;
	cin.get();

	btw_bedrag = bedrag_incl * btw_perc;
	bedrag_excl = bedrag_incl - btw_bedrag;

	cout << "Het bedrag exclusief BTW is: " << bedrag_excl << "\n" << "De BTW bedraagt: " << btw_bedrag << "\n";

	return 0;
}

/*
Neemt een bedrag, trekt btw er vanaf en print zowel het bedrag zonder btw als het btw bedrag
*/