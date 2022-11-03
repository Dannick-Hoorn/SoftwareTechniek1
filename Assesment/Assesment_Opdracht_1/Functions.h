#pragma once
#include <cmath>

double bepaalPlaats(double a, int t, double v_0 = 0, double x_0 = 0) {
	double x_t;

	x_t = 0.5 * a * pow(t,2) + v_0 * t + x_0;

	return x_t;
}