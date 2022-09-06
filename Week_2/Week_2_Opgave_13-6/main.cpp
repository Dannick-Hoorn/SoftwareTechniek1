#include <iostream>

using namespace std;

int main() {

	float a;
	float b;
	float antwoord;

	a = 3.40282e+38F;
	b = 3.40282e+38F;

	antwoord = a + b; //Tel a en b bij elkaar op

	cout << "Het antwoord is: " << antwoord << "\n"; //geeft het antwoord

	return 0;
}

/*
Geeft antwoord "inf"
b vervangen door een kleiner getal geeft het antwoord: 3.40282e+38
*/