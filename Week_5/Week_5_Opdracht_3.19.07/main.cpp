#include <iostream>
#include "ConvertMonth.h"

using namespace std;

int printDatum(int a, int b, int c);

int main(void) {
	int a;
	int b;
	int c;
	cout << "Geef getallen, toets na elk getal Enter" << endl;
	cin >> a;
	cin.get();
	cin >> b;
	cin.get();
	cin >> c;
	cin.get();

	printDatum(a, b, c);
}

int printDatum(int a, int b, int c) {
	if (a > 0 && a < 32) {
		cout << a << '\t';
	}
	else {
		cout << "Ongeldige datum";
		return -1;
	}

	ConvertMonth(a);

	if (c < 30 && c > 9) {
		cout << "20" << c;
	}
	else if (c < 10 && c > 0) {
		cout << "200" << c;
	}
	else if (c > 29 && c < 1000) {
		cout << "19" << c;
	}
	else if (c > 1929 && c < 2030) {
		cout << c;
	}
	else {
		cout << "Ongeldige datum";
		return -1;
	}

	return 0;
}