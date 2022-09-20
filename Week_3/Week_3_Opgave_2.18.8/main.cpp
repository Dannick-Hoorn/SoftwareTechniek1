#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cout << setw(5) << "x" << setw(12) << "kwadraat" << setw(12) << "derde macht" << "\n";
	
	cout << std::setprecision(2) << showpoint << fixed; // zorgt voor notatie xxx.xx, xx.xx of x.xx
	
	for (float x = 1; x < 8; x += 0.50) {
		cout << setw(5) << x << setw(12) << x * x << setw(12) << x * x * x << "\n";
	}
}