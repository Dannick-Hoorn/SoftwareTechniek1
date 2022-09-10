#include <iostream>
using namespace std;

int main() {
	
	int a;
	int b;
	
	std::cout << "Voer eerste getal in: ";
	cin >> a;
	cin.get();

	std::cout << "Voer tweede getal in: ";
	cin >> b;
	cin.get();

	if (a > b) {
		std::cout << a << " is het grootste getal";
	}
	
	else {
		std::cout << b << " is het grootste getal";
	}

	return 0;
}