#pragma once
#include <iostream>

using namespace std;

void printArray(int a[], int lengte) {
    cout << "Huidige array: ";
    for (int i = 0; i != lengte; i++) {
        cout << a[i] << " , ";
    }
    cout << endl;
}

void verwijder(int getal, int a[], int lengte) {
    for (int i = 0; i != lengte; i++) {
        if (a[i] == getal) {
            a[i] = 0;
        }
    }
  
    
    for (int j = 0; j != lengte; j++) {
        for (int i = (lengte -1); i != 0; i--) {
            if (a[i-1] == 0) {
                a[i-1] = a[i];
                a[i] = 0;
            }
        }
    }
}