#include <iostream>
#include "figures.h"

using std::cin; using std::cout; using std::endl;


	void square(int n)
	{
			for (int i = 0; i < n; ++i) {
				for (int j = 0; j < n; ++j) {

					cout << "*";
				}
				cout << endl;
			}
		}
	
		void slash(int n)
		{
			for (int i = 0; i < n; ++i) {
				for (int j = 0; j < n; ++j) {

					if (i == j)

						cout << "*";

					else
						cout << " ";
				}
				cout << endl;
			}
	}

	
		void backslash(int n)
		{
			for (int i = 0; i < n; ++i) {
				for (int j = 0; j < n; ++j) {

					if (i == n - j - 1)

						cout << "*";

					else
						cout << " ";

				}
				cout << endl;
			}
		}

	
		void hollowsquare(int n)
		{
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
		}
	
		void slashedsquare(int n)
		{
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
