#include <iostream>

using namespace std;

int main() {

	int maandsalaris;
	int jaarsalaris;

	std::cout << "Voer maandsalaris in: \n";
	cin >> maandsalaris;
	cin.get();
	

	jaarsalaris = maandsalaris * 12; //vermenig het maandsalaris met het aantal maanden in een jaar (12)

	cout << "Het Jaarsalaris (zonder vakantiegeld) is: " << jaarsalaris << "\n"; //geeft het Jaarsalaris

	return 0;
}
/*
hip programma dat een getal keer 12 doet...
*/