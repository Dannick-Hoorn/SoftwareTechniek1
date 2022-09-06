#include <iostream>

using namespace std;

int main() {

	int DagenInJaar;
	int UrenInDag;
	int MinutenInUur;
	int SecondenInMinuut;

	int SecondenInJaar;

	DagenInJaar = 365;
	UrenInDag = 24;
	MinutenInUur = 60;
	SecondenInMinuut = 60;

	SecondenInJaar = DagenInJaar * UrenInDag * MinutenInUur * SecondenInMinuut;

	cout << "Het aantal seconden in een jaar is: " << SecondenInJaar << "\n";

	return 0;
}
/*
Berekent het aantal seconden in een jaar en print het in de CMD
*/