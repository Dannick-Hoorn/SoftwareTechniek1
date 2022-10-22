#pragma once

#include <iostream>

using namespace std;

bool isPriemgetal(int num) {//algoritme voor priemgetallen (zie opdracht 1)
	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

void maakArray(int getallen, int priem[]) { // als priemgetal = true, voeg toe aan de array, als false: trek 1 van i af zodat de array niet verder gaat
	int num = 2;
	bool result;

	for (int i = 0; i < getallen; i++) {
		result = isPriemgetal(num);
		if (result == true) {
			priem[i] = num;
		}
		else {
			i--;
		}
		num++;
	}
}

void printArray(int getallen, int priem[]) {// simpele array print functie
	for (int i = 0; i != getallen; i++) {
		cout << priem[i] << ", ";
	}
}