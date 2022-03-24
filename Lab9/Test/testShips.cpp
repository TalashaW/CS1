#include "battleship.hpp"
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {

    srand(time(nullptr));
    srand(1);

    Location mySpot;
    mySpot.x = 5;
    mySpot.y = 'e';


    cout << "mySpot.x = " << mySpot.x << " mySpot.y = " << mySpot.y << endl;

    mySpot = pick();
    cout << "mySpot.x = " << mySpot.x << " mySpot.y = " << mySpot.y << endl;

    mySpot = fire();
    cout << "mySpot.x = " << mySpot.x << " mySpot.y = " << mySpot.y << endl;



    Ship myShip;

    myShip.loc = pick();
    myShip.sunk = false;
    printShip(myShip);

    if (match(myShip, mySpot))
        cout << "myShip is at mySpot Location\n";
    else
        cout << "myShip is not at mySpot Location\n";

    sink(myShip);
    printShip(myShip);




    Ship myFleet[fleetSize];

    initialize(myFleet);
    printFleet(myFleet);

    if (check(myFleet, mySpot) != -1)
        cout << "myFleet has a ship at mySpot\n";
    else
        cout << "myFleet does not have a ship at mySpot\n";

    deploy(myFleet);
    printFleet(myFleet);

    if (operational(myFleet))
        cout << "at least one ship is not sunk\n";
    else
        cout << "all ships are sunk\n";
}