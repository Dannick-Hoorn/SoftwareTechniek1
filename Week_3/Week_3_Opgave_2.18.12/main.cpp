#include <iostream>

using namespace std;

int main() {
    char ch = 'y';
    double cijfer, som = 0.0, gemiddelde;
    int aantal = 0;
    while (ch != 'n') {
        cout << "Voer cijfer in: ";
        cin >> cijfer;
        cin.get();               // Verwijder newline uit invoerbuffer
        if (cijfer < 1.0 || cijfer > 10.0) {
            cout << "Dit was geen geldig cijfer" << '\n';
            break;                 // break-statement
        }

        aantal++;
        som += cijfer;

        cout << "Meer cijfers invoeren? (j of n): ";
        cin >> ch;
        while (cin.get() != '\n');
        cout << '\n';
    }

    cout << "Er zijn " << aantal
        << " geldige cijfers ingevoerd." << '\n';
    if (aantal > 0) {
        gemiddelde = som / aantal;
        cout << "Het gemiddelde is: " << gemiddelde << '\n';
    }
}
/*
Geef char ch een beginwaarde 'y', verplaats while naar de plek waar "do" stond.
*/