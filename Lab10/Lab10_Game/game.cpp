#include <iostream>
#include <ctime>
#include <cstdlib>
#include "battleship.hpp"

using std::cin; using std::cout; using std::endl;

int main() {

	srand(int(time(0)));
	Ship myFleet[fleetSize];
	

	initialize(myFleet);
	deploy(myFleet);
	printFleet(myFleet);

	while (operational(myFleet)) {

		Location myLocation = fire();
		int index = check(myFleet, myLocation);

		if (index != -1) {
			sink(myFleet[index]);
			cout << "Hit!" << endl;
		}
		else {
			cout << "Miss!" << endl;
		}
		printFleet(myFleet);
	}
}