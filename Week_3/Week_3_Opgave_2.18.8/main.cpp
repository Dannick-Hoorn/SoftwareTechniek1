#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cout << setw(5) << "x";
	cout << setw(12) << "kwadraat";
	cout << setw(12) << "derde macht";
	cout << "\n";
	
	cout << std::setprecision(2) << std::showpoint << std::fixed; // zorgt voor notatie xxx.xx, xx.xx of x.xx
	
	for (float x = 1; x < 8; x += 0.50) {
		cout << setw(5) << x;
		cout << setw(12) << x * x;
		cout << setw(12) << x * x * x;
		cout << "\n";
	}
}