#include <iostream>
#include <cmath>


using std::cin; using std::cout; using std::endl;

int main() {

	int operNum;
	
	while (true) {
		
	cout << "1. absolute value " << endl;
	cout << "2. square root " << endl;
	cout << "3. floor " << endl;
	cout << "4. power" << endl;

	cout << "Select an operation: " << endl;
	cin >> operNum;

	
		if (operNum == 1) {
			int abVal;
			cout << "enter absolute value: ";
			cin >> abVal;
			cout << "The result is: " << abs(abVal) << endl;

		}
		else if (operNum == 2) {
			int userNum;
			cout << "enter integer: ";
			cin >> userNum;
			cout << "The result is: " << sqrt(userNum);
			cout << endl;

		}
		else if (operNum == 3) {
			int floorIn;
			cout << "enter decimal: ";
			cin >> floorIn;
			cout << "The result is: " << floor(floorIn);
			cout << endl;
		}
		else if (operNum == 4) {
			int base;
			int exponent;
			cout << "enter base: ";
			cin >> base;
			cout << "enter exponent: ";
			cin >> exponent;
			cout << "The result is: " << pow(base, exponent);
			cout << endl;
		}
		else {
			break;
		}

	}
	return 0;
		
}