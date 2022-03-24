#include <iostream>
#include "figures.h"

using std::cin; using std::cout; using std::endl;



int main() {

	while (true)
	{
		int figure;
		int figSize;


		cout << "1. Square " << endl;
		cout << "2. Slash " << endl;
		cout << "3. BackSlash " << endl;
		cout << "4. Hollow Square" << endl;
		cout << "5. Slashed Square" << endl;

		cout << "choose a shape " << endl;
		cin >> figure;
	

		cout << "choose a size " << endl;
		cin >> figSize;

		switch (figure)
		{

		case 1:
		{
			square(figSize);
			break;
		}
		case 2:
		{
			slash(figSize);
			break;
		}

		case 3:
		{
			backslash(figSize);
			break;
		}
		case 4:
		{
			hollowsquare(figSize);
			break;
		}
		case 5:
		{
			slashedsquare(figSize);
			break;
		}
		}
		return 0;
	}
}
	