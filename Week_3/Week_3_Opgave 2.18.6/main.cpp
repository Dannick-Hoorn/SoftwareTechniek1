#include <iostream>
using namespace std;

int main() {
	int som = 0;
	for (int getal = 1; getal < 25; getal++) {
		if (getal % 2 == 0) {
			cout << getal << "\n";
			som = som + getal;
		}
		if (getal == 24) {
			cout << "Som van de getallen is: " << som;
		}
	}
}