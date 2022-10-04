#include <iostream>

using namespace std;

void fac(int n, long long& resultaat);

int main() {
	int input;
	long long resultaat;

	cin >> input;
	cin.get();

	fac(input, resultaat);

	cout << resultaat;
	return 0;
}


void fac(int n, long long& resultaat) {
	int count = 0;
	long long a = 1;
	if (n > 0 && n < 26) {
		while (count != n) {
			a *= (count + 1);
			count++;
		}
		resultaat = a;
	}
	else if (n == 0) {
		resultaat = 1;
	}
	else if (n < 0) {
		resultaat = 0;
	}
	else {
		resultaat = -1;
		cout << "Te groot getal ingevoerd" << endl;
	}
}
//je kunt tot 26 gaan.