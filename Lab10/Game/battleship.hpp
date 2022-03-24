#include <cstdlib>
#include <ctime>


#ifndef BATTLESHIP_HPP_
#define BATTLESHIP_HPP_



const int fleetSize = 6;
const int fieldSize = 6;


struct Location {
    int x;
    char y;
};


struct Ship {
    Location loc;
    bool sunk;
};

void initialize(Ship[]);


Location pick();
bool match(const Ship&, const Location&);

int check(const Ship[], const Location&);

void deploy(Ship[]);


void printShip(const Ship&);

void printFleet(const Ship[]);


bool operational(const Ship[]);

Location fire();


void sink(Ship&);

#endif  BATTLESHIP_HPP_ 
