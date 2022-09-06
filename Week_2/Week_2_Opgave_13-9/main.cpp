#include <iostream>

using namespace std;

int main() {

	double maandsalaris;
	double jaarsalaris_excl;//jaarsalaris zonder vakantiegeld
	double jaarsalaris_incl;//jaarsalaris met vakantiegeld

	std::cout << "Voer maandsalaris in: \n";
	cin >> maandsalaris;
	cin.get();


	jaarsalaris_excl = maandsalaris * 12; //vermenig het maandsalaris met het aantal maanden in een jaar (12)
	jaarsalaris_incl = jaarsalaris_excl * 1.08; //tel 8 procent vakantiegeld bij het jaarsalaris op

	cout << "Het Jaarsalaris (inclusief vakantiegeld) is: " << jaarsalaris_incl << "\n"; //geeft het Jaarsalaris inclusief vakantiegeld

	return 0;
}
/*
hip programma dat een getal keer 12 doet...
en dat getal keer 1.08 doet...
*/