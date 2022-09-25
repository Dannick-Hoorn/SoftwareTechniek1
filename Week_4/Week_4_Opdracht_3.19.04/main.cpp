#include<iomanip>
#include<iostream>

using namespace std;

int optelfunctie(int x) {
	int som = 0;
	for (int c = 0; c <= x; c++) {
		som += c;
	}
	return som;
}

int main() {
	int n;
	cout << "Voer geheel getal in: ";
	cin >> n;
	cin.get();
	cout << endl;
	int som = optelfunctie(n);

	cout << "De som van getallen is: " << som;
}