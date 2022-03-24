#include <iostream>
#include "varArray.hpp"

using std::cin; using std::cout; using std::endl;

int main() {

	char operation;
	varArray a1;
	double userNum;


	while (true) {

		cout << "Enter operation [a/r/q] and number: ";
		cin >> operation >> userNum;

		if (operation == 'a') {
			a1.addNumber(userNum);
			cout << "your numbers: ";
			a1.output();
		}
		else if (operation == 'r') {
			a1.removeNumber(userNum);
			cout << "your numbers: ";
			a1.output();
		}
		else
			break;
	}
}


