#pragma once
#include <iostream>
using namespace std;

class Temperature {
public:
	Temperature(double Cel, double Faren) {
		cel = Cel;
		faren = Faren;
	}



	double cel2faren(double a) {
		double b;
		b = a * 1.8 + 32;
		return b;
	}

	double faren2cel(double c) {
		double d;
		d = ((c-32)/9) * 5;
		return d;
	}

private:

	double cel;
	double faren;


};