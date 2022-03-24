#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin; using std::cout; using std::endl;


int main()
{

	const int arraySize = 10;
	int uniqueNumbers[arraySize] = { 0 };
	int randNum = 0;
	int randFound = 0;
	srand(0);


	while (randNum < 10) {
		int n = rand() % 100 + 1;

		for (int i = 0; i < randNum; ++i) {
			if (uniqueNumbers[i] == n) {
				randFound = 1;
				break;
			}
			else {
				randFound = 0;
				break;
			}
		}
		if (randFound == 0) {
			uniqueNumbers[randNum] = n;
			++randNum;
		}
	}
	for (int i = 0; i < 10; ++i) {
		cout << uniqueNumbers[i] << endl;
	}
}