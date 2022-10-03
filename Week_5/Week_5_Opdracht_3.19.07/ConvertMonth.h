#pragma once
#include<iostream>
using namespace std;

void ConvertMonth(int a) {
	switch (a) {
	case 1:
		cout << "Januari" << '\t';
		break;
	case 2:
		cout << "Februari" << '\t';
		break;
	case 3:
		cout << "Maart" << '\t';
		break;
	case 4:
		cout << "April" << '\t';
		break;
	case 5:
		cout << "Mei" << '\t';
		break;
	case 6:
		cout << "Juni" << '\t';
		break;
	case 7:
		cout << "Juli" << '\t';
		break;
	case 8:
		cout << "Augustus" << '\t';
		break;
	case 9:
		cout << "September" << '\t';
		break;
	case 10:
		cout << "Oktober" << '\t';
		break;
	case 11:
		cout << "November" << '\t';
		break;
	case 12:
		cout << "December" << '\t';
		break;
	default:
		cout << "Geen geldige datum";
		break;
	}
}