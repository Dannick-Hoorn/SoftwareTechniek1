#pragma once
#include <cmath>

using namespace std;

double bepaalPlaats(double a, int t, double v_0 = 0, double x_0 = 0) {
	double x_t;

	x_t = 0.5 * a * pow(t, 2) + v_0 * t + x_0;

	return x_t;
}

double bepaalPlaatsen(double a, int t, double v_0 = 0, double x_0 = 0) {

	for (int i = 0; i != t; i++) {

		cout << bepaalPlaats(a, i, v_0, x_0) << endl;

	}

	return 0;
}