#pragma once

#include <iostream>

using namespace std;

bool isPriemgetal(int num) {
	for (int i = 2; i <= num / 2; i++)// algoritme om priemgetal te bepalen, deel door elk nummer tot aan het nummer zelf, als geheel getal > false
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

void printPriemgetallen(int getallen) {
	int num = 2;
	bool result;
	//num =  beginnummer, i = priemgetallen teller
	for (int i = 0; i < getallen; i++) {
		result = isPriemgetal(num);
		if (result == true) {
			cout << num << ", ";
		}
		else {
			i--;
		}
		num++;
	}
}