#include<iostream>

using namespace std;

int main() {
	int a[15] = { 7685946,3,2,3,2,1,2,3,2,1,2,3,2,1,0 };
	int arrayLengte = sizeof(a) / sizeof(int);

	int max = 0, count = 0;

	for (int i = 0; i < arrayLengte; i++) {
		if (a[i] > max) {
			max = a[i];
		}

	}

	for (int i = 0; i < arrayLengte; i++) {
		if (a[i] == max) {
			count++;
		}
	}

	cout << "maximum: " << max << endl;
	cout << "maximum komt " << count << " keer voor";

}