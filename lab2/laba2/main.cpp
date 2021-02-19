#include <iostream>
#include <cmath>
using namespace std;

int isInArea(double x, double y) {
	if (((x * x + y * y <= 1) && 0 <= x <= 1 && y < 1) || (0 <= x <= 1 && 0 <= y <= 1)) {
		return 1;
	}
	else {
		return 0;
	}
}

double f(double x) {
	return (x <= 3) ? x * x - 3 * x + 9 : 1 / (x * x * x + 6);
}

int main() {
	int task;
	double x;
	cout << "Select task (1 or 2)" << endl;
	cin >> task;

	switch (task) {
		case 1 :
			double y;
			cout << "Enter the X coordinate" << endl;
			cin >> x;
			cout << "Enter the Y coordinate" << endl;
			cin >> y;

			if (isInArea(x, y) == 1) {
				cout << "Enters the area";
			}
			else {
				cout << "Dont enters the area";
			}
			break;
		case 2 :
			cout << "Enter the X" << endl;
			cin >> x;
			cout << "f(x) = " << f(x);
			break;
		default : 
			printf("Invalid input");
			break;
	}

	return 0;
}


