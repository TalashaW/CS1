#include "battleship.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cin; using std::cout; using std::endl;

int main() {

	srand(time(nullptr));
	Fleet myFleet;

	myFleet.deployFleet();

	do {
		Location shot;
		shot.fire();

	if (myFleet.isHitNSink(shot)) {

			cout << "Hit!" << endl;
		}
		else 
			cout << "Miss!" << endl;
		}
	while (myFleet.operational());
} 