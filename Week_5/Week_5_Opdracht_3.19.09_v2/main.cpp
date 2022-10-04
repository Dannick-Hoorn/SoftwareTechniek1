#include <iostream>

using namespace std;

void fac(int n, long long& resultaat);

int main() {
test:
	int input;
	long long resultaat = 1;

	cin >> input;
	cin.get();

	fac(input, resultaat);

	cout << resultaat << endl;
	goto test;
	return 0;
}


void fac(int n, long long& resultaat) {
	switch (n) {
	case 0:
		resultaat = 1;
		break;

	default:
		if (n > 0) {
			for (int x = 0; x < n; x++) {
				resultaat = resultaat * (x + 1);
			}
		}
		else {
			resultaat = -1;
		}
	}
}

//gaat goed tot en met 20 (geeft 2,432,902,008,176,640,000)
//21 zou 51,090,942,171,709,440,000 geven, wat groter is dan het maximum van een long long