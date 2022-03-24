#include "battleship.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin; using std::cout; using std::endl;



void Location::pick() {
	srand(time(nullptr));
	x_ = rand() % 6 + 1;
	y_ = 'a' + rand() % 6 + 1;
}

Location::Location() {
	x_= -1;
	y_ = -1;
}

void Location::fire() {
	cout << "Enter firing coordinates(x,y) ex(a6,b4...): ";
	cin >> y_, x_;
}

void Location::print()const {
	cout << y_ << x_;
}

bool compare(const Location& one, const Location& two) {
	if (one.x_==two.x_ && one.y_==two.y_)
		return true;
	else
		return false;
}

Ship::Ship() {
	sunk_ = false;
}

bool Ship::match(const Location& userShot) const {
	return compare(loc_, userShot);
}

void Ship::sink() {
	sunk_ = true;
}

void Ship::setLocation(const Location& mySpot) {
	loc_ = mySpot;
}
void Ship::printShip() const {
	loc_.print();
	if (sunk_ == true) {
		cout << "Sunk" << endl;
	}
	else
		cout << "Not Sunk" << endl;
}
void Fleet::deployFleet() {

	for (int i = 0; i < fleetSize_; ++i) {
		Location tmp;
		tmp.pick();
		ships_[i].setLocation(tmp);
	}
}
bool Fleet::operational() const {
	for (int i = 0; i < fleetSize_; ++i) {
		if (ships_[i].isSunk() == false) {
			return true;
		}
			return false;
	}
}

bool Fleet::isHitNSink(const Location& loc) {
	for (int i = 0; i < fleetSize_; ++i) {
		if (ships_[i].match(loc) == true) {
			ships_[i].sink();
			return true;
		}
	}
	return false;
}
void Fleet::printFleet() const{
	for (int i = 0; i < fleetSize_; ++i) {
		ships_[i].printShip();
	}
}

