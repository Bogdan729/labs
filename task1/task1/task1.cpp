#include <iostream>
using namespace std;

void main(double f, double x) {
	x = 0;
	f = (cos(x) + sin(x)) / (cos(x) - sin(x));
	cout << f << endl;
	cin >> x;
	f = (cos(x) + sin(x)) / (cos(x) - sin(x));
	cout << f << endl;
}