#include<iostream>

using namespace std;

void optellen(int a[], int b[], int c[], int lengte);
void printArray(int c[], int lengte);

int main() {
	int a[10] = { 12,23,37,44,51,68,76,83,99,10 };
	int b[10] = { 10,94,98,74,65,56,48,34,27,10 };
	int c[10] = { 0 };
	int lengte = sizeof(a) / sizeof(int);

	optellen(a, b, c, lengte);

	printArray(c, lengte);
}

void optellen(int a[], int b[], int c[], int lengte) {
	for (int i = 0; i != lengte; i++) {
		c[i] = a[i] + b[i];
	}
}

void printArray(int c[], int lengte) {
	for (int i = 0; i != lengte; i++) {
		cout << c[i] << endl;
	}
}