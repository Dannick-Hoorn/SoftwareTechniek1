#include<iostream>

using namespace std;

int main() {
	char c;

	cin >> c;
	cin.get();

	c += 1;

	if (c >= 65 && c <= 90) {
		cout << c;
	}
	else if(c >= 97 && c <= 122) {
		cout << c;
	}
	else {
		cout << "@ \n";
	}
	return 0;
}