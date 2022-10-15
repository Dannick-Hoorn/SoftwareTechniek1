#include<iostream>
#include"Functions.h"

using namespace std;

int main() {

	const int MaxAantal = 10;
	int a[MaxAantal] = { 3,8,2,6,5,17,7,99,3,12 };
	const int lengte = sizeof(a) / sizeof(int);
	int getal;
	char antwoord;

	printArray(a, lengte);
	Nogmaals:
	cout << "Welk getal moet verwijderd worden? \n";

	cin >> getal;
	cin.get();

	verwijder(getal, a, lengte);

	printArray(a, lengte);

	cout << "Wilt u nog een getal verwijderen? (j/n)\n";

	cin >> antwoord;
	cin.get();

	switch (antwoord) {
	case 'j': case 'J':
		goto Nogmaals;
	case 'n': case 'N':
		break;
	}
	

}