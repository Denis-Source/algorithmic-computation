#include <iostream>
#include <cmath>


using namespace std;


double formulaN(double y, double p) {
	double numerator = 3 * pow(y, 2) + sqrt(2.7 * y);
	double denominator = log(p + y) + exp(p);
	return numerator / denominator;
}


void printResults(double array[][2], int arrayLen) {
	for (int i = 0; i < arrayLen; i++) {
		double currP = array[i][0];
		double currX = array[i][0];
		double currResult = formulaN(currP, currX);
		printf("For value x = %f, y = %f, the result is: %f\n", currP, currX, currResult);
	}
}


int main() {
	const int valuesLen = 4;

	double values[valuesLen][2] = {
		{3,		1.3		},
		{2.321,	1.32	},
		{1.32,	0.032	},
		{0.321,	0.0001	}
	};

	printResults(values, valuesLen);
}