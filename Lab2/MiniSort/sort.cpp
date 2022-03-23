#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

    // inputs the numbers
    cout << "Enter three numbers: ";
    int x, y, z;
    cin >> x >> y >> z;

    int tmp;


    if (x > y) {
        tmp = x;
        x = y;
        y = tmp;
    }


    if (y > z) {
        tmp = y;
        y = z;
        z = tmp;
    }

    if (x > y) {
        tmp = x;
        x = y;
        y = tmp;
    }

    cout << "The sorted numbers are: ";
    cout << x << " " << y << " " << z << endl;
