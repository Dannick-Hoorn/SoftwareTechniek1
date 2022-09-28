#include<iostream>
#include"wiskunde.h"

using namespace std;

int main(void) {

	for (int i = 0; i < 200; i++) {
		cout << berekenGemiddelde(i, i*i) << endl;
	
	}
	return 0;
}

