#include<iostream>

using namespace std;

void kopieer(const int bron[], int bestemming[], int lengte);

int main() {

	int bron[10] = { 1,2,3,4,5,6,7,8,9,10 };
	const int lengte = sizeof(bron) / sizeof(int);
	int bestemming[lengte] = {0};

	kopieer(bron, bestemming, lengte);

	for (int i = 0; i != lengte; i++) {
		cout << bestemming[i] << endl;
	}
}

void kopieer(const int bron[], int bestemming[], int lengte) {
	for (int i = 0; i != lengte; i++) {
		bestemming[i] = bron[i];
	}
}