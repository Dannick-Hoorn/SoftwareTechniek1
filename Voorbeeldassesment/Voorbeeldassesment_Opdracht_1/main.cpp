#include <iostream>
#include "Functies.h"

using namespace std;

int main() {
	int getallen;
	
	cout << "Hoeveel priemgetallen printen? \n";

	cin >> getallen;
	cin.get();

	printPriemgetallen(getallen);
}