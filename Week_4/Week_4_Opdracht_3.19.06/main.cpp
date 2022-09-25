#include<iostream>

using namespace std;

int max(int a, int b, int c) {
	if (a > b && a > c) {
		return a;
	}
	else if (b > a && b > c) {
		return b;
	}
	else if (c > a && c > b) {
		return c;
	}
	else {
		cout << "gelijke getallen gedetecteerd" << endl;
	}
}

int main() {
	int a;
	int b;
	int c;
	cout << "Voer 3 getallen in, druk na elk getal op enter." << endl;
	cin >> a;
	cin.get();
	cin >> b;
	cin.get();
	cin >> c;
	cin.get();
	
	int maximum = max(a, b, c);

	cout << "Het grootste getal is: " << maximum;
}