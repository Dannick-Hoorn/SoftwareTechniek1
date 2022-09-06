#include <iostream>

using namespace std;

int main() {

	double a;
	double b;
	double antwoord;

	a = 1;
	b = 1.79769e+308;

	antwoord = a / b; //deel a en b door elkaar

	cout << "Het antwoord is: " << antwoord << "\n"; //geeft het antwoord

	return 0;
}

/*
bij a = 2.22507e-308;
	b = 1.79769e+308;
	is het antwoord 0
bij a = 1;
	b = 1.79769e+308;
	is het antwoord 5.56269e-309
	wat opzich raar is als het minimum 2.22507e-308 is
*/