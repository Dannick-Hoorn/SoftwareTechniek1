#include<iostream>

using namespace std;

int main() {

	int a;
	int b;
	int c;

	a = 5;
	
	cout << "Voer een geheel getal in \n";
	cin >> b; //vragen om int input van gebruiker

	c = a * b; //vermenigvuldiging van a en b
	
	cout << "Het antwoord is: " << c << "\n"; //print het antwoord

	return 0;
}