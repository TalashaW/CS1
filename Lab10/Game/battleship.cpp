#include "battleship.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>


using std::cin; using std::cout; using std::endl;

bool match(const Ship& myShip, const Location& mySpot) {
	if (myShip.loc.x == mySpot.x && myShip.loc.y == mySpot.y) 
		return true;
	
	else 
		return false;
	
}

int check(const Ship myFleet[], const Location& mySpot) {

	for (int i = 0; i < fleetSize; ++i) 
		if (match(myFleet[i], mySpot)) {
			return i;
		}
		return -1;
}

void initialize(Ship myFleet[]) {


	for (int i = 0; i < fleetSize; ++i) {
		myFleet[i].loc.x = -1;
		myFleet[i].loc.y = '*';
	}
}
Location pick() {
	Location mySpot;

	srand(time(nullptr));
	mySpot.x = rand() % fieldSize + 1;
	int y = rand() % fieldSize + 1;
	switch(y)
	{
	case 1:
		mySpot.y = 'a';
		break;
	case 2:
		mySpot.y = 'b';
		break;
	case 3:
		mySpot.y = 'c';
		break;
	case 4:
		mySpot.y = 'd';
		break;
	case 5:
		mySpot.y = 'e';
		break;
	case 6:
		mySpot.y = 'f';
		break;
	}

	return mySpot;
}

void deploy(Ship myFleet[]) {


	int i = 0;
	while (i < fleetSize) {
		Location mySpot = pick();
		int tmp = check(myFleet, mySpot);
		if (tmp == -1) {
			myFleet[i].loc = mySpot;
			myFleet[i].sunk = false;
			++i;
		}
	}
}
void printShip(const Ship& myShip) {

	cout << myShip.loc.y << myShip.loc.x << " ";
	if (myShip.sunk) 
		cout << "sunk";
	else
		cout << "up";
	}

void printFleet(const Ship myFleet[]) {

	printShip(myFleet[0]);
	for (int i = 1; i < fleetSize; ++i) {
		cout << ", ";
		printShip(myFleet[i]);
	}
	cout << endl;
}

bool operational(const Ship myFleet[]) {

	for (int i = 0; i < fleetSize; ++i) {
		if (myFleet[i].loc.x != -1 && myFleet[i].loc.y !=-1)
			return true;
	}
	return false;
}
Location fire() {

	Location mySpot;
	cout << "Choose hit location: ";
	cin >> mySpot.y >> mySpot.x;
	return mySpot;
}
void sink(Ship& myShip) {
	myShip.sunk = true;
}