#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	int ascii = 122;

	for (int p = 0; p < 26; p++) {
		char ch = ascii;
		cout << ch;
		ascii--;
	}
	cout << "\n";
	return 0;
}