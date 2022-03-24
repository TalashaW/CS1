#include <iostream>

using std::cin; using std::cout; using std::endl;

void swap(int&x, int&y) {

    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

int main() {

    int x;
    int y;
    int z;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    if (x > y) {
        swap(x, y);
    }
    if (x > z) {
        swap(x, z);
    }

    if (y > z) {
        swap(y, z);
    }

    cout << "The sorted numbers are: ";
    cout << x << " " << y << " " << z << endl;
}




