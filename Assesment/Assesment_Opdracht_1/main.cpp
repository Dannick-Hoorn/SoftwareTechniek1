#include <iostream>
#include "Functions.h"
#include <iomanip>

using namespace std;

int main() {
	int a = 4;
	int t = 20;

	int x_t = bepaalPlaats(a, t);

	cout << setw(5) << "a";
	cout << setw(5) << "t";
	cout << setw(5) << "x_t" << endl;
	
	cout << setw(5) << a << setw(5)  << t << setw(5) << x_t << endl;

}

//afgetekend cijfer 6