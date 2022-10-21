#include <iostream>
#include "Functies.h"

using namespace std;

int main() {
	int getallen;
	int priem[50] = { 0 };

	cout << "Hoeveel priemgetallen printen? \n";

	cin >> getallen;
	cin.get();

	maakArray(getallen, priem);
	printArray(getallen, priem);
	draaiArrayOm(getallen, priem);
	printArray(getallen, priem);
}