#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int maxspaties = 10;
	int maxsterren = 1;
	const int maxrijen = 6;

	for (int rijen = 0; rijen < maxrijen; rijen++) { //bovenkant eerst
		for (int spaties = 0; spaties < maxspaties; spaties++) {
			cout << " ";
		}
		for (int sterren = 0; sterren < maxsterren; sterren++) {
			cout << "*";
		}
		cout << "\n";
		maxspaties--;
		maxsterren+= 2;
	}

	for (int rijen = 0; rijen <= maxrijen; rijen++) { //dan onderkant
		for (int spaties = 0; spaties < maxspaties; spaties++) {
			cout << " ";
		}
		for (int sterren = 0; sterren < maxsterren; sterren++) {
			cout << "*";
		}
		cout << "\n";
		maxspaties++;
		maxsterren -= 2;
	}
}