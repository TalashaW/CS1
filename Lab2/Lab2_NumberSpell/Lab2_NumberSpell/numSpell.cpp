#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	cout << "Input number from 1-50";
	int n;
	cin >> n;

	const int singles = n % 10;
	const int tens = n / 10;

	if (n >= 20 && n <= 50) {
		switch (tens)
		{
		case 2:
			cout << "Twenty-";
			break;

		case 3:
			cout << "Thirty-";
			break;

		case 4:
			cout << "Forty";
			break;

		case 5:
			cout << "Fifty";
			break;
		}
	}
	if (n > 0 && n < 10) {
		switch (singles)
		{
		case 1:
			cout << "one";
			break;

		case 2:
			cout << "two";
			break;

		case 3:
			cout << "three";
			break;

		case 4:
			cout << "four";
			break;

		case 5:
			cout << "five";
			break;

		case 6:
			cout << "six";
			break;

		case 7:
			cout << "seven";
			break;

		case 8:
			cout << "eight";
			break;

		case 9:
			cout << "nine";
			break;
		}
	}
	if (n >= 11 && n <= 19) {
		switch (n) {

		case 11:
			cout << "eleven";
			break;

		case 12:
			cout << "twelve";
			break;

		case 13:
			cout << "thirteen";
			break;

		case 14:
			cout << "fourteen";
			break;

		case 15:
			cout << "fifteen";
			break;

		case 16:
			cout << "sixteen";
			break;

		case 17:
			cout << "seventeen";
			break;

		case 18:
			cout << "eighteen";
			break;

		case 19:
			cout << "nineteen";
			break;
		}
	}
	cout << tens << singles << endl;
}
