#include <iostream>
#include "varArray.hpp"

using std::cin; using std::cout; using std::endl;

int main() {

	char operation;
	int size = 0;
	double input;
	double* a = new double[size];


	while (true) {
		
		cout << "Enter operation [a/r/q] and number: ";
		cin >> operation >> input;

		if (operation == 'a') {
			addNumber(a, input, size);
			cout << "your numbers: ";
			output(a, size);
		}
		else if (operation == 'r') {
			removeNumber(a, input, size);
			cout << "your numbers: ";
			output(a, size);
		}
		else
			break;
	}
}


		
