# include <iostream>
#include "figures.h"

using std::cin; using std::cout; using std::endl;

int main() {

	cout << "Input number: ";
	int n;
	cin >> n;


	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {

			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {

			if (i == j)

				cout << "*";

			else
				cout << " ";
		}
		cout << endl;

	}


	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {

			if (i == n - j - 1)

				cout << "*";

			else
				cout << " ";

		}
		cout << endl;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {

			if (i == 0 || j == 0)
				cout << "*";

			else if ((i == n - 1) || (j == n - 1))
				cout << "*";

			else
				cout << " ";
		}
		cout << endl;
	}
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {

			if (i == j || j == (n - i - 1))

				cout << "*";

			else if ((n == n - i) || (n == n - j))
				cout << "*";

			else if ((i == n - 1) || (j == n - 1))
				cout << "*";
			
			else
				cout << " ";
		}
		cout << endl;
	}
}