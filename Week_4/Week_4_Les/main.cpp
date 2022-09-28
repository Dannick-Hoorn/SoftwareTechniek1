#include<iostream>

using namespace std;

double berekenGemiddelde(double a, double b);


int main(void) {
	cout << berekenGemiddelde(35, 698);
	return 0;
}

double berekenGemiddelde(double a, double b) {
	double c = (a + b) / 2;
	return c;
}