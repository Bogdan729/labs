#include <iostream>

using namespace std;

double x;
double result;
void f(void);

void main() {

	x = 0;
	f();
	cout << result << endl;

	cin >> x;
	f();
	cout << result;
}

void f(void) {
	result = (cos(x) + sin(x)) / (cos(x) - sin(x));
}






