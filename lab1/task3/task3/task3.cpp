#include <iostream>

using namespace std;

double f(double x);

void main(double x) {

	double result;

	x = 0;
	result = f(x);
	cout << result << endl;

	cin >> x;
	result = f(x);
	cout << result;
}


double f(double x) {

	double func;
	func = (cos(x) + sin(x)) / (cos(x) - sin(x));
	return func;
}



