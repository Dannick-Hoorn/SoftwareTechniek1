#pragma once

#include <iostream>

using namespace std;

bool isPriemgetal(int num) {// zie opdracht 1
	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

void maakArray(int getallen, int priem[]) {//zie opdracht 2
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

void printArray(int getallen, int priem[]) {//zie opdracht 2
	for (int i = 0; i != getallen; i++) {
		cout << priem[i] << ", ";
	}
	cout << endl;
}

void draaiArrayOm(int getallen, int priem[]) {//switch constant plekken: 1e en laatste, 2e en 1 na laatste, enzovoort totdat de array is omgedraaid.
	for (int i = 0; i < getallen / 2; i++) {
		int geheugen = priem[getallen - 1 - i];
		priem[getallen - 1 - i] = priem[i];
		priem[i] = geheugen;
	}
}