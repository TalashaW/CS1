# include <iostream>
# include <ctime>
#include <cstdlib>
 
using std::cin; using std::cout; using std::endl;

int main() {
	int userGuess, randValue;


	srand(time(0));
	randValue = (rand() % 100);
	
	cout << "How old am I? ";
	cin >> userGuess;
	cout << endl;


	while (true) {

		if (randValue > userGuess) {
			cout << " wrong, I am older. How old am I? " << userGuess << endl;
			cin >> userGuess;
			cout << endl;
		}

		else if (randValue < userGuess) {
			cout << "Wrong, I am younger.  How old am I? ";
			cin >> userGuess;
			cout << endl;
		}
		 else {
			cout << "Correct!" << endl;
			break;
		}
	}
	return 0;
}