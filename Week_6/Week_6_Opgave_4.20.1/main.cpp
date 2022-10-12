#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int a[5] = { 0 };
	int arraylengte = sizeof(a) / sizeof(int);

	for (int i = 0; i < arraylengte; i++) {
		cin >> a[i];
		cin.get();
	}

	double totaal = 0;
	for (int j = 0; j < arraylengte; j++) {
		totaal += a[j];
	}

	double gemiddeld = totaal / arraylengte;
	cout << "Gemiddelde: " << fixed << setprecision(1) << gemiddeld << endl;

	return 0;
}